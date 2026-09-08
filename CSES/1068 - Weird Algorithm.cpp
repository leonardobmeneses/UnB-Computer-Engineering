/*
 * CSES - Weird Algorithm
 * Link do Desafio: https://cses.fi/problemset/task/1068
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

void solve(long long int n){
    cout << n << " ";
    if(n==1){
        return;
    }else{
        if(n%2==0){
            n = n/2;
        }else{
            n = n*3+1;
        }
        return solve(n);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n;
    cin >> n;
    solve(n);
}