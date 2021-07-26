#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define MAX 30001

int N;
int arr[MAX]={0,};
vector<int> v;

int main() {
    cin >> N;
    
    for(int i=0;i<N;i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int result=-1;

    for(int i=0;i<N-1;i++) {
        for(int j=i+1;j<N;j++) {
            if(v[i]>v[j]) arr[i]++;
            else break;
        }
        result=max(arr[i],result);
    }
    cout << result;
    
}