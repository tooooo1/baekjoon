#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<int> pLus;
vector<int> mInus;

int main() {
    cin >> N;

    for(int i=0;i<N;i++) {
        int x;
        cin >> x;
        if(x>0) 
            pLus.push_back(x);
        else
            mInus.push_back(x);
    }

    sort(pLus.rbegin(),pLus.rend());
    sort(mInus.begin(),mInus.end());

    int total=0;
    int ps = pLus.size()-1;
    int ms = mInus.size()-1;

    if(pLus.size()%2) {
        for(int i=0;i<ps;i+=2) {
            if(pLus[i] ==1 || pLus[i+1] ==1){
                total+=pLus[i]+pLus[i+1];
            } else total+=pLus[i]*pLus[i+1];
        }
        total+=pLus[ps];
    } else {
        for(int i=0;i<ps;i+=2) 
            if(pLus[i] ==1 || pLus[i+1] ==1){
                total+=pLus[i]+pLus[i+1];
            } else total+=pLus[i]*pLus[i+1];
    }

    if(mInus.size()%2) {
        for(int i=0;i<ms;i+=2)
            total+=mInus[i]*mInus[i+1];
        total+=mInus[ms];
    } else {
        for(int i=0;i<ms;i+=2)
            total+=mInus[i]*mInus[i+1];
    }

    cout << total;
}