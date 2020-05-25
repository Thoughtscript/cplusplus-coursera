#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int insert(int value, std::vector<int> &table) {
    // Code to insert value into a hashed location in table
    // where table is a vector of length 1000.
    // Returns the number of collisions encountered when
    // trying to insert value into table.
    int collisions = 0, hash;

    if (value < 1000) {
        hash = value;
    } else {
        // get last three
        string numAsStr = to_string(value);
        int s = numAsStr.size();
        string lastThree = numAsStr.substr(s-3, s);
        hash = stoi(lastThree);
        //cout << lastThree << endl;
    }

    if (table[hash] == -1) {
        table[hash] = value;
    } else {
        while (table[hash] != -1) {
            collisions += 1;
            hash += 1;
            if (hash > table.size() - 1) { hash = 0; }
        }
        table[hash] = value;
    }
    return collisions;
}

int main() {
    int i, j, hit, max_hit = 0, max_value = -1;

    std::vector<int> value(500);

    int old_value = 0;
    for (i = 0; i < 500; i++) {
        old_value += rand()%100;
        value[i] = old_value;
    }

    // create hash table of size 1000 initialized with -1
    std::vector<int> table(1000,-1);

    for (i = 0; i < 500; i++) {
        hit = insert(value[i],table);
        if (hit > max_hit) {
            max_hit = hit;
            max_value = value[i];
        }
    }

    std::cout << "Hashing value " << max_value << " experienced " << max_hit << " collisions." << std::endl <<std::endl;

    for (j = 0; j < 1000; j += 10) {
        std::cout << std::setw(3) << j << ":";
        for (i = 0; i < 10; i++) {
            if (table[j+i] == -1)
                std::cout << "      ";
            else
                std::cout << std::setw(6) << table[j+i];
        }
        std::cout << std::endl;
    }

    return 0;
}