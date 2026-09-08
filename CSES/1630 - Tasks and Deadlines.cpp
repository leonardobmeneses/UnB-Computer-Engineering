/*
 * CSES - Tasks and Deadlines
 * Link do Desafio: https://cses.fi/problemset/task/1630/
 * * Autor: Leonardo Meneses
 */


#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr)

void solve(int n){
    vector<pair<long, long>> tarefas(n);
    for(int i=0; i<n; i++){
        cin >> tarefas[i].first >> tarefas[i].second;
    }
    sort(tarefas.begin(), tarefas.end());
    long long lucro = 0;
    long long relogio = 0;
    for(int i=0; i<n; i++){
        lucro += tarefas[i].second - (relogio + tarefas[i].first);
        relogio += tarefas[i].first;
    }
    cout << lucro << "\n";
}
int main(){
    FASTIO;
    int n;
    cin >> n;
    solve(n);
    return 0;
}