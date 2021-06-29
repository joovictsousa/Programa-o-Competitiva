#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define ll long long int

using namespace std;

int f(ll n,ll mid){
    return (mid>=pow(2*n-mid,0.5));
}

ll buscaBin(ll n){
    ll lo=1,hi=n,mid;
    while(lo<hi){
        mid=(hi+lo)/2;
        if(f(n,mid)) hi=mid;
        else lo=mid+1;
    }
    return lo;


}

int main(){_
    int n;
    ll c,x;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>c;
        x=buscaBin(c);
        if(((x*x+x)/2)==c) cout<<x<<endl;
        else cout<<x-1<<endl;
    }

    return 0;
}