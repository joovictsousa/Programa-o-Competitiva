#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int main(){_
    int soma,casa,num;

    while(cin>>num){
        soma=1;
        casa=1;
        while(soma%num!=0){
            soma=((soma%num)*(10%num))%num;
            soma+=1;
            ++casa;
        }
        cout<<casa<<endl;
    }
    return 0;
}