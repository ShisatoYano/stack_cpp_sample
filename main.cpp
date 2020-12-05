#include <bits/stdc++.h>
using namespace std;

void print_stack(stack<int> s) {
    while (!s.empty()) {
        cout << '\t' << s.top();
        s.pop();
    }
    cout << '\n';
}

int main() {
    stack<int> s;
    s.push(10);
    s.push(30);
    s.push(20);
    s.push(5);
    s.push(1);

    cout << "Given stack is: ";
    print_stack(s);

    cout << "\ns.size(): " << s.size();
    cout << "\ns.top(): " << s.top();

    cout << "\ns.pop(): ";
    s.pop();
    print_stack(s);

    return 0;
}
