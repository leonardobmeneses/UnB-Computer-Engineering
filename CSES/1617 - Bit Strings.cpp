/*
 * CSES - Bit String
 * Link do Desafio: https://cses.fi/problemset/task/1617/
 * * Autor: Leonardo Meneses
 */


#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr)
#define ll long long
const int MOD = 1e9+7;

int main(){
    FASTIO;
    int n;
    cin >> n;
    ll ans = 1;
    for(int i=0; i<n; i++){
        ans = (ans*2) % MOD;
    }
    cout << ans << "\n";
    return 0;
}