#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

#define MAX 10001
using namespace std;

int V, E;
int parent[MAX];
int result=0;
vector<tuple<int,int,int>> v;

int find(int x) {
    if(parent[x]==x) return x;
    else return parent[x]=find(parent[x]);
}

void connection(int x,int y) {
    x=find(x);
    y=find(y);
    if(x!=y) {
        parent[x]=y;
    }
}

bool same(int x,int y) {
    x=find(x);
    y=find(y);
    if(x==y) return true;
    else return false;
}

int main() {
    cin >> V >> E;

    for(int i=1;i<=V;i++)
        parent[i]=i;

    for(int i=0;i<E;i++) {
        int A,B,C;
        cin >> A >> B >> C;
        v.push_back({C,A,B});
    }

    sort(v.begin(),v.end());

    for(int i=0;i<E;i++) {
        if(!same(get<1>(v[i]), get<2>(v[i]))) {
            connection(get<1>(v[i]), get<2>(v[i]));
            result +=get<0>(v[i]);
        }
    }

    cout << result;
}