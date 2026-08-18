/*
 * CSES - Missing Number
 * Link do Desafio: https://cses.fi/ckvo8q5wh/task/1083
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;

    long long somaTotal = n * (n+1) / 2;

    long long somaFaltante = 0;
    for(int i=0; i<n-1; i++){
        int numeros;
        cin >> numeros;
        somaFaltante += numeros;
    }
    long long numeroFaltante = somaTotal - somaFaltante;
    cout << numeroFaltante << "\n";
    return 0;
}