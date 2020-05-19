#include <iostream>
#include <queue>

using namespace std;

int main() {

    queue<int> q;
    q.push(0);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // first one in, first one out
    // 0 is removed first, 4 is removed last
    cout << "Queue last one in: " << q.back() << endl;
    cout << "Queue first one in: " << q.front() << endl;

    // iterate through queue
    while (!q.empty()) {

        // see the current "first one in"
        int top = q.front();
        cout << "Queue top: " << top << endl;

        // remove the most "first one in"
        q.pop();
    }

    return 0;
}