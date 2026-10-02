/*
 * CSES - Nearest Smaller Values
 * Link do Desafio: https://cses.fi/problemset/task/1621/
 * * Autor: Leonardo Meneses
 */


#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr)
#define ll long long

int main(){
    FASTIO;
    string chessboard[8];
    for(int i=0; i<8; i++){
        cin >> chessboard[i];
    }
    int queens = 4;
    int possibility = 0;
    for(int mask=0; mask<(1<<8); mask++){
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(chessboard[i][j] = '.'){
                    
                }
            }
        }
    }

    return 0;
}