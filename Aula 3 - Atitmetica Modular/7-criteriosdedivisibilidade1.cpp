#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define TAM 100123
using namespace std;

int main(){_
    string n;
    int tam,finalpos,resto3=0;
	cin>>n;
	tam = n.size();
	finalpos = n[tam-1]-'0';
    if(finalpos==0){
        finalpos=10;
    }
    if(finalpos%2==0) cout<<"S"<<endl;
    else cout<<"N"<<endl;
    for (int i=0; i<tam; ++i){
        resto3 = (resto3 + n[i]-'0') % 3;
    }
    if(resto3==0) cout<<"S"<<endl;
    else cout<<"N"<<endl;
	if(finalpos%5==0) cout<<"S"<<endl;
    else cout<<"N"<<endl;
	return 0;
}
