#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<int> v;
vector<int> temp;

int main() {
    cin >> N;

    for(int i=0;i<N;i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());
    temp.assign(v.begin(),v.end());

    int search = 1;

    while(true) {
        if(search>temp[N-1]) {
            
        }

    }

    

}