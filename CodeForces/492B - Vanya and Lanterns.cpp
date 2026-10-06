/*
 * CodeForces - Vanya and Lanterns - 492B
 * Link do Desafio: https://codeforces.com/problemset/problem/492/B
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr)
#define ll long long

int main(){
    FASTIO;
    ll l,d;
    cin >> l >> d;
    vector<ll> lanterns(l);
    for(int i=0; i<l; i++){
        cin >> lanterns[i];
    }
    sort(lanterns.begin(), lanterns.end());
    double maior = max(lanterns[0]-0, d-lanterns[l-1]);
    for(int i=0; i<l-1; i++){
        maior = max(maior, (double)(lanterns[i+1]-lanterns[i])/2.0);
    }
    cout << fixed << setprecision(10) << maior << "\n";
    return 0;
}