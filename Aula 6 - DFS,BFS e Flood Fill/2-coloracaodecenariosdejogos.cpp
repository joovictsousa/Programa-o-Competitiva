#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 1200
using namespace std;

int cont,vis[MAXN][MAXN];
int n,m;
char mat[MAXN][MAXN];

void ff(int i,int j){
  if(i>n || j>m || i<1 || j<1) return ;
  if(vis[i][j]==1 || mat[i][j]!='.') return ;
  vis[i][j]=1;
  ff(i+1,j);
  ff(i-1,j);
  ff(i,j-1);
  ff(i,j+1);
}

int main(){_
  cin>>n>>m;
  for(int i=1;i<=n;++i) for(int j=1;j<=m;++j) cin>>mat[i][j];
  for(int i=1;i<=n;++i){
    for(int j=1;j<=m;++j){
      if(vis[i][j]==0 && mat[i][j]!='o') ++cont, ff(i,j);
    }
  }
  cout<<cont<<endl;

  return 0;
}
