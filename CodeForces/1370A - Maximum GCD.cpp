/*
 * CodeForces - Maximum GCD - 1370
 * Link do Desafio: https://codeforces.com/problemset/problem/1370/A
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr)
#define ll long long

int main(){
    FASTIO;
    int t;
    cin >> t;
    int melhor;
    while(t--){
        int n;
        cin >> n;
        melhor = n/2;
        cout << melhor << "\n";
    }
    return 0;
}