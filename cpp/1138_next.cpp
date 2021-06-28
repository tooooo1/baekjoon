#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int arr[11];
vector<int> v;

int main() {
    cin >> N;

    for(int i=1;i<=N;i++) {
        cin >> arr[i];
        v.push_back(i);
    }
    sort(v.begin(),v.end());

    for(int i=0;i<N;i++)
        cout << v[i];


}