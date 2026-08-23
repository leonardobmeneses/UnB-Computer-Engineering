/*
 * CSES - Reading Books
 * Link do Desafio: https://cses.fi/problemset/task/1631
 * * Autor: Leonardo Meneses
 */


#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    long long soma = 0;
    long long maior = 0;
    for(int i=0; i<n; i++){
        long long tempo;
        cin >> tempo;
        soma+=tempo;
        if(tempo > maior){
            maior = tempo;
        }
    }
    soma = soma - maior;
    if(maior > soma){
        cout << maior + maior << "\n";
    }else{
        cout << soma + maior << "\n";
    }
    
    return 0;
}