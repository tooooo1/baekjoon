#include <iostream>
#include <vector>

using namespace std;

int N,K;
vector<pair<int,int>> backpack;
int arr[100001];


int main() {
    cin >> N >> K;
    
    for(int i=0;i<N;i++) {
        int v,w;
        cin >> v >> w;
        backpack.push_back({v,w});
    }
        
    for (int i = 0; i < N; i++) {
        for (int j = K; j >= 1; j--) {
            if (backpack[i].first <= j) {
                arr[j] = max(arr[j], arr[j - backpack[i].first] + backpack[i].second);
            }
        }
    }

    cout << arr[K];
    
}