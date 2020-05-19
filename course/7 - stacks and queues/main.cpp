#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int dequeue (queue<int> q) {
    int last = q.front();
    q.pop();
    return last;
}

int destack (stack<int> s) {
    int last = s.top();
    s.pop();
    return last;
}

int main() {

    stack<int> s;
    queue<int> q;

    for (int i = 0; i < 5; i++) {
        s.push(i);
        q.push(i);
    }

    for (int i = 0; i < 5; i++) {
        s.push(dequeue(q));
        q.push(destack(s));
    }

    while (!s.empty()) {
        int tp = s.top();
        cout << tp << endl;
        s.pop();
    }

    // 0,0,0,0,0,4,3,2,1,0

    while (!q.empty()) {
        int fr = q.front();
        cout << fr << endl;
        q.pop();
    }

    // 0,1,2,3,4,0,0,0,0,0

    return 0;
}