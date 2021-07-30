#include <iostream>

using namespace std;

int N, K, total=0;
int arr[1001]={0,};

int main() {
    cin >> N >> K;

    for(int i=1;i<=K;i++) {
        arr[i]=i;
        total+=i;
    }

    if(total>N) cout << -1;
    else if(total==N) cout << arr[K]-arr[1];
    else {
        int temp= N-total;
        int indx=K;
        while(true) {
            arr[indx--]++;
            temp--;

            if(temp==0) break;
            if(indx==0) indx=K;
        }
        cout << arr[K] - arr[1];
    }
}