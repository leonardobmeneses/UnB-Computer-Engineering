/*
 * CSES - Permutations
 * Link do Desafio: https://cses.fi/problemset/task/1070
 * * Autor: Leonardo Meneses
 */


#include <bits/stdc++.h>

using namespace std;

void permutacao(int n){
    if(n==2 || n==3){
        cout << "NO SOLUTION\n";
    }else{
        for(int i=2; i<=n; i+=2){
            cout << i << " ";
        }
        for(int i=1; i<=n; i+=2){
            cout << i << " ";
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    permutacao(n);
    return 0;
}