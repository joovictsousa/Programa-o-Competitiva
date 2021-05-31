/*Questão 2721 URI*/ 
#include<bits/stdc++.h>
 #define _ ios_base::sync_with_stdio(0);
 
 using namespace std;
 
 int main(){
    string nomes[] = {"Rudolph", "Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner" , "Blitzen"};
    int num,soma=0;
    
    for(int i=0;i<9;i++){
        cin >> num;
        soma += num;
    }
    soma = soma%9;
    cout << nomes[soma] << endl;
 
    return 0;
 }
