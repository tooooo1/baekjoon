#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a;
    cin >> a;
    int input[a];
    vector<int> v;

    for (int i = 0; i<a;i++) {
        cin >> input[i];
    }
    for (int i = 0; i<a;i++) {    
        v.push_back(input[i]);
    }
    sort(v.begin(),v.end());
    for(auto& i : v)
        cout<< i << "\n";
}