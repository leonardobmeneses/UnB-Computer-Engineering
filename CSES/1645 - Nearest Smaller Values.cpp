/*
 * CSES - Nearest Smaller Values
 * Link do Desafio: https://cses.fi/problemset/task/1645
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> numeros(n);
    vector<int> indice;
    for(int i=0; i<n; i++){
        cin >> numeros[i];
        while(!indice.empty() && numeros[indice.back()]  >= numeros[i]){
            indice.pop_back();
        }
        if(indice.empty()){
            cout << "0 ";
        }else{
            cout << indice.back() + 1 << " ";
        }
        indice.push_back(i);
    }

    return 0 ;
}