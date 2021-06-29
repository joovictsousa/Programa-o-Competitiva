#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 100123

using namespace std;

int vet[MAXN],a,b;

int f(int n,int p,int soma){
	return (n+p>=soma);
}

void bb(int x,int n){
	int lo,hi,mid;
	for(int i=0;i<n;++i){
		lo=0,hi=n-1;
		while(lo<hi){
			mid=lo+(hi-lo)/2;
			if(f(vet[i],vet[mid],x)) hi=mid;
			else lo=mid+1;
		}
		if(vet[i]+vet[lo]==x){
			a=vet[i];
			b=vet[lo];
			return;
		}
	}
}

int main(){_
	int n,x;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>vet[i];
	}
	cin>>x;
	bb(x,n);
	cout<<a<<" "<<b<<endl;
	return 0;
}