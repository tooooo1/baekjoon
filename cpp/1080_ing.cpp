//문제 이해를 못함
//현재 코드는한줄한줄 바꾸는 코드임
// 3*3 부분행렬 부분이 모호한듯

#include <iostream>

using namespace std;

int N,M,indx;
bool flag=false;
bool flag_two=false;
string matrix_before[51];
string matrix_after[51];
string matrix[51];

int main() {
    cin >> N >> M;

    for(int i=0;i<N;i++) 
        cin >> matrix_before[i];
    
    for(int i=0;i<N;i++)
        cin >> matrix_after[i];

    for(int i=0;i<N;i++) 
        for(int j=0;j<M;j++) 
            if(matrix_before[i][j]==matrix_after[i][j])
                matrix[i].append("0");
            else matrix[i].append("1");

    for(int i=0;i<N;i++) {
        for(int j=0;j<M-1;j++) {
            if(matrix[i][j]!=matrix[i][j+1])
                flag=true;
                if(flag) break;
        }
        if(flag) break;
    }

    if(flag) {
        for(int i=0;i<N-1;i++) {
            for(int j=0;j<M;j++) {
                if(matrix[i][j]!=matrix[i+1][j])
                    flag_two=true;
            }
        }
    }

    int result=0;

    if (flag && !flag_two) {
        for(int i=0;i<M;i++) {
            if(matrix[0][i]=='1') {
                result++;
            }
        }
        cout << result;
    } else if ((!flag && flag_two)||(!flag && !flag_two)) {
        for(int i=0;i<N;i++) {
            if(matrix[i][0]=='1') {
                result++;
            }
        }
        cout << result;
    } else cout << "-1";

    
            
}