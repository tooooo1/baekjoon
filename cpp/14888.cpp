#include <iostream>
#include <climits>

using namespace std;

int N;
int operands[20];
int operators[20];
int maxValue = INT_MIN;
int minValue = INT_MAX;

void solution(int result, int k) {
    if (k==N) {
        if(result>maxValue) maxValue=result;
        if(result<minValue) minValue=result;
    }
    for(int i=0;i<4;i++) {
        if(operators[i]>0) {
            operators[i]--;
            if (i==0) solution(result+operands[k],k+1);
            else if (i==1) solution(result-operands[k],k+1);
            else if (i==2) solution(result*operands[k],k+1);
            else solution(result/operands[k],k+1);
            operators[i]++;
        }
    }
}

int main() {
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> operands[i];
    for (int i=0;i<4;i++)
        cin >> operators[i];
    solution(operands[0],1);
    cout<<maxValue<<"\n"<<minValue;
}