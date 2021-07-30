#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 100123

using namespace std;

int pai[MAXN];

void init(int n){
    for(int i=0;i<n;++i) pai[i]=i;
}

int id(int n){
    return (pai[n]==n ? n:(pai[n]=id(pai[n])));
}

void join(int u, int v){
    u=id(u);
    v=id(v);
    pai[v]=u;
}

int main(){_
    int m,n,u,v;
    char p;
    cin>>n>>m;
    init(n+1);
    for(int i=0;i<m;++i){
        cin>>p>>u>>v;
        if(p=='F') join(u,v);
        else cout<<(id(u)==id(v) ? "S":"N")<<endl;
    }

    return 0;
}
