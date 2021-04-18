#include <iostream>

using namespace std;

int main() {
    int count;
    bool flag=true;
    cin>>count;

    for (int i=1; i<=count; i++) {
        for (int j=1 ; j<=count-i; j++) {
            cout << " ";
        }
        for (int j=1 ; j<=i;j++) {
            cout << "*";

            if(i==j) {
                flag=false;
            }
        }
        if(!flag) {
            cout<<"\n";
            flag = true;
        }

    }
}