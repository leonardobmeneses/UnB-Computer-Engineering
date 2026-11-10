/*
 * CodeForces - Twins - 160A
 * Link do Desafio: https://codeforces.com/problemset/problem/160/A
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr)
#define ll long long

int main(){
    FASTIO;
    int moedas;
    cin >> moedas;
    vector<int> valor(moedas);
    int soma_total = 0;
    for(int i=0; i<moedas; i++){
        cin >> valor[i];
        soma_total += valor[i];
    }
    sort(valor.rbegin(), valor.rend());
    int minha_soma = 0;
    int minhas_moedas = 0;
    for(int i=0; i<moedas; i++){
        minha_soma += valor[i];
        minhas_moedas++;
        if(minha_soma > soma_total/2){
            break;
        }
    }
    cout << minhas_moedas << "\n";
    return 0;
}