#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 250
using namespace std;
int n,m,vis[MAXN][MAXN],mat[MAXN][MAXN],cor,cont1,cont;

void ff(int i,int j){
    if(i>n || j>m || i<1 || j<1) return ;
    if(vis[i][j]==1 || (cor!=mat[i][j])) return ;
    vis[i][j]=1;
    if(cor==mat[i][j]) ++cont;
    ff(i+1,j);
    ff(i-1,j);
    ff(i,j+1);
    ff(i,j-1);
}

int main(){_
    int maior=100000;
    cin>>n>>m;
    for(int i=1;i<=n;++i) for(int j=1;j<=m;++j) cin>>mat[i][j];
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            cont=0;
            cor=mat[i][j];
            ff(i,j);
            if(cont<maior && cont!=0) maior=cont;
        }
    }
    cout<<maior<<endl;
    return 0;
}
