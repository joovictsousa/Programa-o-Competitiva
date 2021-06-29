#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int main(){_
    string ano;
    int n,d,bq=0,bc=0,bqc=0,fh=0,fb=0,i,cont=0;
    while(cin>>ano){
        cont++;
        if(cont!=1) cout<<endl;
        n=0;
        for(i=0;i<(int)ano.size();++i){
            d=ano[i]-'0';
            n=10*n+d;
            bq=n%4;
            bc=n%100;
            bqc=n%400;
            fh=n%15;
            fb=n%55;
            n=n%13200;
        }
        if((bq==0 && bc!=0)||(bqc==0)){
            cout<<"This is leap year."<<endl;
            if(fh==0) cout<<"This is huluculu festival year."<<endl;
            if(fb==0) cout<<"This is bulukulu festival year."<<endl;
        }
        else if(fh==0) cout<<"This is huluculu festival year."<<endl;
        else cout<<"This is an ordinary year."<<endl;
    }
    return 0;
}