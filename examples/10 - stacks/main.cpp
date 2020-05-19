#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack<int> s;
    s.push(0);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // last one in, first one out
    // 4 is removed first, 0 is removed last
    cout << "Stack last one in: " << s.top() << endl;

    // iterate through queue
    while (!s.empty()) {

        // see the current "first one in"
        int top = s.top();
        cout << "Stack top: " << top << endl;

        // remove the most "first one in"
        s.pop();
    }


    return 0;
}