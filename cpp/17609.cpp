#include <iostream>

using namespace std;

int T;
bool flag=true;
string s;

int main() {
    cin>> T;

    while(T--) {
        cin >> s;
        
        int start=0, end=s.length()-1;

        if(s.length()%2) {
           while(!(end-start)) {
               if(s[start++]==s[end--]) {}
               else {
                   flag=false;
                   break;
               }
           }
           if(s[start]!=s[end]) flag=false;
        } else {
            while(end-start!=2) {
                
            }
        }
        if(flag) cout << "0\n";
    }

    
}