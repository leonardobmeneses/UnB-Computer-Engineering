/*
 * CodeForces - Odd Eraser - 2258A
 * Link do Desafio: https://codeforces.com/problemset/problem/2258/A
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        cout << gcd(v[0], v[n-1]) << "\n";
    }   
    return 0;
}