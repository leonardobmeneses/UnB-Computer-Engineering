/*
 * CodeForces - I'ts Time to Duel - 2109A
 * Link do Desafio: https://codeforces.com/problemset/problem/282/A
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr)

int main(){
    FASTIO;
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        vector<int> partidas(n);
        for(int i=0; i<n; i++){
            cin >> partidas[i];
        }
        bool mentindo = false;
        bool temZero = (partidas[0] == 0);
        for(int i=1; i<n; i++){
            if(partidas[i] == 0){
                temZero = true;
                if(partidas[i-1] == 0){
                    mentindo = true;
                    break;
                }
            }
        }
        if(!temZero || mentindo){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    
    return 0;
}