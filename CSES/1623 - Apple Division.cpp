/*
 * CSES - Nearest Smaller Values
 * Link do Desafio: https://cses.fi/problemset/task/1621/
 * * Autor: Leonardo Meneses
 */


#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr)

int main(){
    FASTIO;
    int n;
    cin >> n;
    vector<int> numbers(n);
    for(int i=0; i<n; i++){
        cin >> numbers[i];
    }
    int smaller = 2e8;
    int sideA = 0;
    int sideB = 0;
    for(int i=0; i<n-1; i++){
        sideA += numbers[i];
        for(int j=i+1; j<n; j++){
            sideB += numbers[j];
        }
        smaller = min(smaller, abs(sideA - sideB));
        sideB = 0;
    }
    cout << smaller << "\n";
    return 0;
}