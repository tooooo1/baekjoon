#include <iostream>

using namespace std;

int stack=0;
string s;

int main() {
    cin >> s;

    for(int i=0;i<s.length();i++) {
        stack++;

        if(s[i]=='.') {
            stack--;
            if(stack==2) {
                for(int j=1;j<=2;j++)
                    s[i-j]='B';
                stack=0;
            }
            stack=0;
        } else {
            if(stack==4) {
                for(int j=0;j<4;j++)
                    s[i-j]='A';
                stack=0;
            }
            if(i==s.length()-1) {
                if(stack==2) {
                    for(int j=0;j<2;j++)
                        s[i-j]='B';
                    stack=0;
                }
            }
        }
    }
    
    if(s.find('X')!=std::string::npos) cout << -1;
    else cout << s;
    
}