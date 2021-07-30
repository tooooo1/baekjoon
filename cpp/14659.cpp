#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define MAX 30001

int N;
int arr[30001]={0,}; //산의 크기
vector<int> v; //내가 잡은 나보다 약한 사람의 수

int main() {
    cin >> N;
    
    for(int i=0;i<N;i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int result=-1; //초기화

    for(int i=0;i<N-1;i++) {
        for(int j=i+1;j<N;j++) {
            if(v[i]>v[j]) arr[i]++; //+1 더해준다
            else break;
        }
        result=max(arr[i],result);
        
    }
    cout << result; //가장 많이 잡은 사람
}