#include<bits/stdc++.h>
 #define _ ios_base::sync_with_stdio(0);

 using namespace std;

 struct jogador{
    int posicao;
    int pontuacao;
 };

 int cmp(jogador a, jogador b){
    if(a.pontuacao!=b.pontuacao) return a.pontuacao>b.pontuacao;
    return a.posicao>b.posicao;
 }

 int main(){
    int j,r,pont;
    jogador jog[501];

    cin>>j>>r;

    for(int i=0;i<j;++i){
        jog[i].pontuacao=0;
        jog[i].posicao=i;
    }

    for(int k=0;k<r;++k){
        for(int i=0; i<j;++i){
            cin>>pont;
            jog[i].pontuacao+=pont;
        }
    }
    sort(jog,jog+j,cmp);
    cout<<jog[0].posicao+1<<endl;

    return 0;
 }
