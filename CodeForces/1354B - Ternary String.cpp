/*
 * CodeForces - Ternary String - 1354B
 * Link do Desafio: https://codeforces.com/problemset/problem/1354/B
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr)
#define ll long long

void resolve() {
    string s;
    cin >> s;
    int ultimo_1 = -1, ultimo_2 = -1, ultimo_3 = -1;
    int menor_tamanho = 1e9;
    for(int i=0; i<s.length(); i++){
        if (s[i] == '1') ultimo_1 = i;
        else if (s[i] == '2') ultimo_2 = i;
        else if (s[i] == '3') ultimo_3 = i;
        if(ultimo_1 != -1 && ultimo_2 != -1 && ultimo_3 != -1){
            int inicio_janela = min({ultimo_1, ultimo_2, ultimo_3});
            int tamanho_atual = i - inicio_janela + 1;
            menor_tamanho = min(menor_tamanho, tamanho_atual);
        }
    }
    if(menor_tamanho == 1e9){
        cout << 0 << "\n";
    }else{
        cout << menor_tamanho << "\n";
    }
}

int main() {
    FASTIO;
    int t;
    cin >> t;
    while (t--) {
        resolve();
    }
    return 0;
}