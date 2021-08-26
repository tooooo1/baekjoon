#include <iostream>
#include <algorithm>

using namespace std;

int N;
int num[11];
string s;

int main() {
    cin >> s;
    //배열에 카운트 저장
    for(int i=0;i<s.length();i++)
        num[s[i]-48]++;
    //6과 9는 공동 사용 가능하니 계산
    int sixnine = (num[6] + num[9] +1)/2;
    //계산 후 배분
    num[6]=num[9]=sixnine;
    //가장 많은 카운트 값 출력
    cout << *max_element(num,num+11);
}