/*
 * CSES - Missing Number
 * Link do Desafio: https://cses.fi/ckvo8q5wh/task/1083
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    vector <long long> v(n, -1);

    for(int i=0; i<n-1; i++){
        int x;
        cin >> x;
        v[x-1] = x;
    }
    for(int i=0; i<n; i++){
        if(v[i] == -1)
            cout << i+1 << "\n";
    }
    return 0;
}