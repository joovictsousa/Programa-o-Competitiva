#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 123

using namespace std;

int pai[MAXN],conta;

void init(int n){
    for(int i=0;i<=n;++i) pai[i]=i;
}

int id(int n){
    return (pai[n]==n ? n:(pai[n]=id(pai[n])));
}

void join(int u,int v){
    u=id(u),v=id(v);
    if(pai[u]!=pai[v]) --conta;
    pai[v]=u;
}

int main(){_
    int t,n,m,u,v,cont=0;
    cin>>t;
    for(int i=0;i<t;++i){
        cin>>n>>m;
        conta=n;
        init(n+1);
        for(int i=0;i<m;++i){
            cin>>u>>v;
            join(u,v);
        }
        ++cont;
        cout<<"Caso #"<<cont<<":";
        if(conta==1) cout<<" a promessa foi cumprida"<<endl;
        else cout<<" ainda falta(m) "<<(conta-1)<<" estrada(s)"<<endl;
    }

    return 0;
}
