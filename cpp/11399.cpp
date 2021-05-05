#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec;
    int N;
    int total=0;
    cin >> N;
    int time[N];

    for (int i =0;i<N;i++) {
        cin >> time[i];
        vec.push_back(time[i]);
    }
    sort(vec.begin(),vec.end());

    int result[N] = {0, };

    for (int i =0; i<N;i++) {
        for(int j=0; j<=i;j++) {
            result[i]+=vec[j];
        }
    }

    for(int i=0; i<N;i++) {
        total+=result[i];
    }

    cout << total;
}