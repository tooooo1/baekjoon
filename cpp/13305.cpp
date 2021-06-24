#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

ll N;
ll result=0;
vector<ll> dis;
vector<ll> city;

int main() {
    cin >> N;

    for(auto i=0;i<N-1;i++) {
        int x;
        cin >>x;
        dis.push_back(x);
    }

    for(auto i=0;i<N;i++) {
        int x;
        cin >> x;
        city.push_back(x);
    }

    ll temp=city[0];

    for(int indx=0;indx<=N-1;indx++) {
        if(temp<=city[indx+1]) {
            result+=dis[indx]*temp;
        } else {
            result+=dis[indx]*temp;
            temp=city[indx+1];
        }
    }
    cout << result;
}