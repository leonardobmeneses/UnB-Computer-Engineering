/*
 * CSES - Distinct Numbers
 * Link do Desafio: https://cses.fi/ckvo8q5wh/task/1621
 * * Autor: Leonardo Meneses
 */


#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false); cin.tie(nullptr)

void solve(){
    long long n;
    cin >> n;
    set<int> lista;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        lista.insert(x);
    }
    cout << lista.size() << "\n";
}

int main(){
    FASTIO;
    solve();
    
    return 0;
}