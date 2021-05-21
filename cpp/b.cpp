#include <stdio.h>
#include <math.h>

void display_point(int x, int y);
double compute_distance(int x1,int y1,int x2,int y2);

int main() {
    int x1,x2,y1,y2,move;
    double distance;

    printf("p1 ��ǥ �Է�(x��, y�� ��ǥ�� �Է�): ");
    scanf("%d %d",&x1, &y1);

    printf("p2 ��ǥ �Է�(x��, y�� ��ǥ�� �Է�): ");
    scanf("%d %d",&x2, &y2);

    printf("p1 = ");
    display_point(x1,y1);

    printf("p1 = ");
    display_point(x2,y2);
    
    printf("���� ������ �Ÿ� = %.5f",compute_distance(x1,y1,x2,y2));
}

void display_point(int x,int y) {
    printf("(%d, %d)\n",x,y);
}

double compute_distance(int x1,int y1,int x2,int y2) {
    double distance;

    distance = sqrt(pow(x1-x2,2)+ pow(y1-y2,2));

    return distance;
}