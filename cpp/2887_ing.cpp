#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;
#define MAX 100001

int N;
int parent[MAX];
vector<tuple<int,int,int>> v;
vector<tuple<int,int,int>> v1;

int find(int x) {
    if(parent[x]==x) return x;
    else return parent[x]=find(parent[x]);
}

void connection(int x, int y) {
    x = find(x);
    y = find(y);
    if(x<y) parent[y]=x;
    else parent[x]=y;
}

bool same(int x,int y) {
    x = find(x);
    y = find(y);
    if(x==y) return true;
    else return false;
}

int main() {
    cin >> N;

    for(int i=0;i<=N;i++) {
        parent[i]=i;
    }
    
    for(int i=0;i<N;i++) {
        int x,y,z;
        cin >> x >> y >> z;
        v.push_back({x,y,z});
    }

    sort(v.begin(),v.end());
    
    for(int i=0;i<N-1;i++) {
        v1.push_back({abs(get<0>(v[i])-get<0>(v[i+1])), get<0>(v[i]), get<0>(v[i+1])});
        v1.push_back({abs(get<1>(v[i])-get<1>(v[i+1])), get<1>(v[i]), get<1>(v[i+1])});
        v1.push_back({abs(get<2>(v[i])-get<2>(v[i+1])), get<2>(v[i]), get<2>(v[i+1])});
    }

    sort(v1.begin(),v1.end());

    long result=0;

    for(int i=0;v1.size()-1;i++) {
        if(!same(get<0>(v[i]),get<1>(v[i]))) {
            connection(get<0>(v[i]),get<1>(v[i]));
            result+=get<2>(v[i]);
        }
    }

    cout << result;

}