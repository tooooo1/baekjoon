#include <iostream>

using namespace std;

int T;
int A=0,B=0,C=0;
bool flag=true;

int main() {
    cin >> T;

    while(flag) {
        if(T>=300) {
            A=T/300;
            T%=300;
        }else if(T>=60) {
            B=T/60;
            T%=60;
        }else if(T>=10) {
            C=T/10;
            T%=10;
        }else {
            flag=false;
        }
    }

    if(!T) {
        cout << A << " "<< B << " " << C;
    } else cout << "-1";
}