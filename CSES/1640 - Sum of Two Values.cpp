/*
 * CSES - Sum of Two Values
 * Link do Desafio: https://cses.fi/problemset/task/1640/
 * * Autor: Leonardo Meneses
 */


#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr)

void solve(int n, int x){
    map<int, int> anotacoes;
    for(int i=1; i<=n; i++){
        int valor;
        cin >> valor;
        int complemento = x - valor;
        if(anotacoes.count(complemento)){
            cout << anotacoes[complemento] << " " << i << "\n";
            return;
        }else{
            anotacoes[valor] = i;
        }
    }
    cout << "IMPOSSIBLE\n";
}

int main(){
    FASTIO;
    int n,x;
    cin >> n >> x;
    solve(n,x);
    return 0;
}