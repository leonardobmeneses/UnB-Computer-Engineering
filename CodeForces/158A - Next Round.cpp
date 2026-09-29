/*
 * CodeForces - Next Round - 158A
 * Link do Desafio: https://codeforces.com/problemset/problem/158/A
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr)

int main(){
    FASTIO;
    int n,k;
    cin >> n >> k;
    vector<int> contestant(n);
    for(int i=0; i<n; i++){
        cin >> contestant[i];
    }
    int cutOff = contestant[k-1];
    int nextRound = 0;
    for(int i=0; i<n; i++){
        if(contestant[i] >= cutOff && contestant[i] > 0){
            nextRound++;
        }
    }
    cout << nextRound << "\n";
    return 0;
}