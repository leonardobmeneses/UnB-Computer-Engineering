/*
 * CSES - Towers
 * Link do Desafio: https://cses.fi/problemset/task/1073/
 * * Autor: Leonardo Meneses
 */


#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr)

void solve(int n){
    multiset<int> topo;
    for(int i=0; i<n; i++){
        int cubo;
        cin >> cubo;
        auto it = topo.upper_bound(cubo);
        if(it != topo.end()){
            topo.erase(it);
        }
        topo.insert(cubo);
    }
    cout << topo.size() << "\n";
}

int main(){
    FASTIO;
    int n;
    cin >> n;
    solve(n);
    return 0;
}