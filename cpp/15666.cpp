#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;
#define MAX 9

int N,M;
int first[MAX];
int arr[MAX];
set<vector<int>> s; //중복 제거!

void dfs(int num, int k) { //현재 위치
    if(k==M) { //목표인 M까지 도달했다면
        vector<int> v;
        for(auto i=0;i<M;i++)
            v.push_back(arr[i]);
        s.insert(v); //set에 추가
        v.clear(); //vector 초기화
    }else { //목표에 도달하지 않았다면
        for(auto i=num; i<N;i++) {
            arr[k]=first[i]; // 정렬한 N값을 arr에 저장
            dfs(i, k+1); //더 깊게 들어가자. (M까지)
        }
    }
}

int main() {
    cin >> N >> M;

    for(int i=0;i<N;i++)
        cin >> first[i];
    
    sort(first,first+N); //정렬

    dfs(0, 0);

    for(auto vector:s) {
        for(auto temp:vector)
            cout << temp << " ";
        cout << "\n";
    }
}