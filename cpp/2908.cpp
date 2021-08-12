#include <iostream>

using namespace std;

string A, B, AA, BB;

int main() {
    cin >> A >> B; //입력

    for(int i=2;i>=0;i--) { //역으로 저장
        AA += A[i];
        BB += B[i];
    }

    cout << max(AA,BB); //둘 중 큰 값 출력
}