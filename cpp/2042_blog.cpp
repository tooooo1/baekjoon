//https://hugssy.tistory.com/132

#include<iostream>
#define MAX 1000002
using namespace std;
 
typedef long long ll;
ll idxTree[4 * MAX];
 
void Update(ll idx, ll delta) {
    while (idx > 0) {
        idxTree[idx] += delta;
        idx /= 2;
    }
}
 
ll findSum(ll st, ll en) {
    ll ret = 0;
    while (st <= en) {
        if (st % 2 == 1) ret += idxTree[st];
        if (en % 2 == 0) ret += idxTree[en];
        st = (st + 1) / 2;
        en = (en - 1) / 2;
    }
    return ret;
}
 
int main() {
    ll n, m, k;
    cin >> n >> m >> k;
    ll start = 1;
    while (start < n) {
        start *= 2; //n���� ū ���� ���� 2�� ������
    }
    
    for (int i = 0; i < n; i++) { //���� ������� ä����� �Ѵ�. ������ ������ ���� �ʴ� ������
        cin >> idxTree[start + i];
    }
    //Ʈ���� �Ʒ����� ���� ä������
    for (int i = start - 1; i >= 1; i--) {
        idxTree[i] = idxTree[2 * i] + idxTree[2 * i + 1];
    }
    for (int i = 0; i < m + k; i++) {
        ll a, b, c;
        cin >> a >> b >> c; //�� ��� ��� �ε����� ����ؼ� �Ѱܾ���, ���̴� ����-�ִ���
        if (a == 1) Update(b + start - 1, c - idxTree[b + start - 1]);
        else if (a == 2) cout << findSum(b + start - 1, c + start - 1) << '\n';
    }
}
