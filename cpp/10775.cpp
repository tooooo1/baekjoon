#include <iostream>

using namespace std;

int G,P,g;
int parent[100001];

int find(int x) {
    if(x==parent[x]) return x;
    return parent[x] = find(parent[x]);
}

int main() {
    int cnt=0;

    cin >> G >> P;

    for(int i=1;i<=G;i++)
        parent[i]=i;
    
    for(int i=1;i<=P;i++) {
        cin >>g;
        if(!find(g)) break;
        else{
            cnt++;
            parent[find(g)]=find(find(g)-1);
        }
    }
    cout << cnt;
}