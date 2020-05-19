#include <iostream>

using namespace std;

class Pair {
    public:
        int *pa, *pb;
        Pair(int, int);
        Pair(const Pair &);
        ~Pair();
};

/* Class Pair has already been declared
 * as shown in the following comments:
 *
 * class Pair {
 * public:
 *   int *pa,*pb;
 *   Pair(int, int);
 *   Pair(const Pair &);
 *  ~Pair();
 * };
 *
 * Implement its member functions below.
 */

// So, I didn't read through or watch almost any of the videos and am just learning C++
// This didn't go so well at first but then I passed at dinking around
// I wasn't sure about the main.cpp Pair::Pair... syntax! Yikes.

Pair::Pair(int a, int b) {
    // Messed this up - I was just *pa = a; *pb = b; (and it's not wise to I see that) and this is incorrect;
    // I needed to initialize memory since it got assigned the default memory pointer location!!!
    pa = new int;
    pb = new int;
    *pa = a;
    *pb = b;
}

Pair::Pair(const Pair &other) {
    // needed to explicitly create a pointer then refer "through" it
    int *oa = other.pa;
    int *ob = other.pb;
    pa = new int;
    pb = new int;
    *pa = *oa;
    *pb = *ob;
}

Pair::~Pair() {
    *pa = 0;
    *pa = 0;
    pa = nullptr;
    pb = nullptr;
}

/* Here is a main() function you can use
 * to check your implementation of the
 * class Pair member functions.
 */

int main() {
    Pair p(15, 16);
    Pair q(p);
    Pair *hp = new Pair(23, 42);
    delete hp;

    //int * testA = p.pa;
    //int * testB = p.pb;
    //int * testC = q.pa;
    //int * testD = q.pb;

    //std::cout << "TEST A " << *testA << *testB << std::endl;
    //std::cout << "TEST B " << *testC << *testD << std::endl;

    std::cout << "If this message is printed,"
              << " at least the program hasn't crashed yet!\n"
              << "But you may want to print other diagnostic messages too." << std::endl;
    return 0;
}