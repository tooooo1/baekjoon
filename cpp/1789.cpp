#include <iostream>

using namespace std;
typedef long long ll;

int main() {
    ll s;
    cin>>s;

    ll total=0;
    ll temp;

    for(auto i=1;i<1e9;i++) {
        total+=i;
        if(total>=s) {
            temp=i; 
            break;
        }
    }

    if(total==s)
        cout<< temp;
    else
        cout<< temp-1;

}