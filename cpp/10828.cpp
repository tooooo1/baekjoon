#include <iostream>
#include <stack>

using namespace std;

stack<int> s;
string c;
int N,X;

int main() {
    cin >> N;

    for(int i=0;i<N;i++) {
        cin >> c;

        if(c=="push") {
            cin >> X;
            s.push(X);
        } else if(c=="top") {
            if(s.empty()) cout << "-1\n";
            else cout << s.top() << "\n";
        } else if(c=="pop") {
            if(s.empty()) cout << "-1\n";
            else {
                cout << s.top() << "\n";
                s.pop();
            }
        } else if (c=="empty") {
            cout << s.empty() << "\n";
        } else cout << s.size() << "\n";
    }
}