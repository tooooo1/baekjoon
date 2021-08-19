#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    while(true) {
        stack<int> st;
        string s;
        bool flag=false;
        
        getline(cin, s);
        if(s.size()==1 && s[0]=='.') break;

        for(int i=0;i<s.size();i++) {
            if(s[i]=='[') st.push(1);
            if(s[i]=='(') st.push(2);
            if(s[i]==']' || s[i]==')') {
                if(st.empty()) {
                    flag=true;
                } else if(s[i]==']') {
                    if(st.top()==1) st.pop();
                    else flag=true;
                } else if(s[i]==')') {
                    if(st.top()==2) st.pop();
                    else flag=true;
                }
            }
        }
        if(!flag && st.empty()) cout << "yes\n";
        else cout << "no\n";
    }
}
