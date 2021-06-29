#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
using namespace std;

int main(){_
    int n,m,k,v[1012];

    while(cin>>n>>m>>k && (n||m||k)){
        for(int i=0;i<n;i++)cin>>v[i];
        cout<<v[(k-m%n+n-1)%n]<<endl;
    }
    return 0;
}
