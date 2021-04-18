#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N;
    vector<int> vec;

    cin >> N;

    int input[N];

    for (int i=0;i<N;i++) {
        cin>>input[i];
        vec.push_back(input[i]);
    }
    sort(vec.begin(),vec.end());

    for (int i =0;i<vec.size();i++) {
        cout << vec[i]<<'\n';
    }

}