#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N; //�� ����
    scanf("%d",&N);
    int Max[3],Min[3],input[6], result_MAX,result_MIN;
    scanf("%d %d %d", &Max[0], &Max[1], &Max[2]); //ù��° �� ��

    Min[0]=Max[0];
    Min[1]=Max[1];
    Min[2]=Max[2]; //ù��° ���̶� mix, min �� �־���

    for(int i=1; i<N;i++) { //�ι�°�ٺ��� for��
        scanf("%d %d %d", &input[0], &input[1], &input[2]);
        input[3]=input[0];
        input[4]=input[1];
        input[5]=input[2]; // 0,1,2�� MAX, 3,4,5�� MIN

        input[0] += max(Max[0],Max[1]);
        input[1] += max(max(Max[0],Max[1]), Max[2]);
        input[2] += max(Max[1],Max[2]);
        Max[0] = input[0];
        Max[1] = input[1];
        Max[2] = input[2]; //���ο� �� ���� (�ִ�)

        input[3] += min(Min[0],Min[1]);
        input[4] += min(min(Min[0],Min[1]), Min[2]);
        input[5] += min(Min[1],Min[2]);
        Min[0] = input[3];
        Min[1] = input[4];
        Min[2] = input[5]; //���ο� �� ���� (�ּ�)
    }

    result_MAX = max(max(Max[0],Max[1]),Max[2]);
    result_MIN = min(min(Min[0],Min[1]),Min[2]);

    printf("%d %d", result_MAX, result_MIN);
}