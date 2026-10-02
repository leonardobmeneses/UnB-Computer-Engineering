/*
 * CodeForces - Maximum Median - 1201C
 * Link do Desafio: https://codeforces.com/problemset/problem/1201/C
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr)
#define ll long long

bool verifica(ll chute, vector<int> v, int k, int n){
    ll aux = 0;
    for(int i=n/2; i<n; i++){
        if(v[i] < chute){
            aux += chute - v[i];
        }
    }
    if(aux <= k){
        return true;
    }else{
        return false;
    }
}

ll search(vector<int> v, int k, int n){
    ll inicio = 1;
    ll fim = (ll)v[n-1] + k;
    ll res = fim;
    while(inicio <= fim){
        ll meio = inicio + (fim-inicio)/2;
        if(verifica(meio,v,k,n)){
            res = meio;
            inicio = meio + 1;
        }else{
            fim = meio - 1;
        }
    }
    return res;
}

int main(){
    FASTIO;
    int n;
    int k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll res = search(v,k,n);
    cout << res << "\n";
    return 0;
}