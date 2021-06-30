#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define TAM 100123
using namespace std;

string n;
int m,d,divisor[TAM],r,cont,aux;

int main(){_
	cin>>n;
	cin>>m;
	while(m--){
		cin>>d;
		r=0;
		for(int i=0;i<n.size();i++){
			r=(r*2+(n[i]-'0'))%d;
		}
		if(!r){
			divisor[cont]=d;
			cont++;
		}
	}

	if(!cont) cout<<"Nenhum";
	else{
		sort(divisor,divisor+cont);
		for(int i=0;i<cont;i++){
			if(i) cout<<" ";
			cout<<divisor[i];
		}
	}
	cout<<endl;
	return 0;
}
