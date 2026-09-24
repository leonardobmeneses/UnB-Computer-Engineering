/*
 * CodeForces - Beautiful Matrix - 263A
 * Link do Desafio: https://codeforces.com/problemset/problem/263/A
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr)

int main(){
    FASTIO;
    int matrix[5][5];
    int indexI;
    int indexJ;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                indexI = i;
                indexJ = j;
            }
        }
    }
    cout << abs(indexI - 2) + abs(indexJ - 2) << "\n";
    return 0;
}