/*
 * CodeForces - Watermelon - 4A
 * Link do Desafio: https://codeforces.com/problemset/problem/4/A
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr)

int main(){
    FASTIO;
    int w;
    cin >> w;
    if(w%2 == 0 && w > 2){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    return 0;
}