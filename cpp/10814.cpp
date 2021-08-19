#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<pair<int,string>> v;

//비교 함수 직접 구현(나이에 대해서만)
int compare(const pair<int,string> &a, const pair<int,string> &b) {
    return a.first < b.first;
}

int main() {
    cin >> N;
    //배열에 값 넣기
    for(int i=0;i<N;i++) {
        int age;
        string name;
        cin >> age >> name;
        v.push_back({age,name});
    }
    //순서 손상 X 정렬(나이만)
    stable_sort(v.begin(),v.end(),compare);
    //값 출력
    for(int i=0;i<N;i++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }
}