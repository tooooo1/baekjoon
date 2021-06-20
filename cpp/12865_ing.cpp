#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N,K;
int temp=0;
int temp_value=0;
vector<pair<int,int>> backpack;
vector<int> result;


bool comp(pair<int,int> a ,pair<int,int> b) {
    if(a.first == b.first) {
        return a.second < b.second;
    } else {
        return a.first <b.first;
    }
}

int main() {
    cin >> N >> K;
    
    for(int i=0;i<N;i++) {
        int v,w;
        cin >> v >> w;
        backpack.push_back({v,w});
    }
        
    sort(backpack.begin(),backpack.end(),comp);
    
    for(int i=0;i<N;i++) {
        for(int j=0;i+j<N;j++) {
            temp+=backpack[i+j].first;
            temp_value+=backpack[i+j].second;
            if(K>temp) {
            } else if (K == temp) {
                result.push_back(temp_value);
                temp=0; temp_value=0;
                break;
            } else {
                result.push_back(temp_value-backpack[i+j].second);
                temp=0; temp_value=0;
                break;
            }
        }
    }
    
    cout << *max_element(result.begin(),result.end());
    
}