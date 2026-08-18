/*
 * CSES - Increasing Array
 * Link do Desafio: https://cses.fi/problemset/task/1094/
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    vector <long long> lista(n);
    long long movimentos = 0;
    for(int i=0; i<n; i++){
        cin >> lista[i];
        if(i>0){
            if(lista[i] < lista[i-1]){
                movimentos += lista[i-1] - lista[i];
                lista[i] = lista[i-1];
            }
        }
    }
    cout << movimentos << "\n";
    return 0;
}