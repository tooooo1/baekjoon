#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

ll n,m;
vector<ll> people;

int main() {
    cin>> n >> m;

    for (auto i = 0;i<n;i++) {
        int x;
        cin>> x;
        people.push_back(x);
    }
    sort(people.begin(),people.end());

    ll start=1;
    ll end = *max_element(people.begin(),people.end())*m;
    ll result=end;

    while(start <= end) {
        ll mid = (start + end) /2;

        ll sum =0;
        for(int i=0;i<n;i++) {
            sum+=mid/people[i];
        }

        if(sum<m)
            start=mid+1;
        else {
            result=mid;
            end=mid-1;
        }
    }

    cout << result;
}