/*
 * CodeForces - Hot Potatoes at the Fairy Warehouse - 2255A
 * Link do Desafio: https://codeforces.com/problemset/problem/2255/A
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

void solve(int n, int k, string game){
    string current = game;
    for(int i=0; i<k; i++){
        for(int j=0; j<n*2; j++){
            if(i < k-1){
                if(j == 0){
                   if(game[j] == '1' && game[2*n-1] == '0' && game[j+1] == '0'){
                        current[j+1] = '1';
                        current[j] = '0'; 
                    }
                }else if(j == 2*n-1){
                    if(game[j] == '1' && game[j-1] == '0' && game[0] == '0'){
                        current[j] = '0';
                        current[0] = '1';
                        }
                }else{
                    if(game[j] == '1' && game[j-1] == '0' && game[j+1] == '0'){
                        current[j] = '0';
                        current[j+1] = '1';
                    }
                }
            }else{
                if(j == 2*n-1){
                    if(game[j] == '1' && game[0] == '0'){
                        current[j] = '0';
                        current[0] = '1';
                    }
                }else{
                    if(game[j] == '1' && game[j+1] == '0'){
                        current[j] = '0';
                        current[j+1] = '1';
                    }
                }
            }
        }
    }
    int redTeam = 0;
    int blueTeam = 0;
    for(int i=0; i<n*2; i++){
        if(i%2 == 0){
            if(current[i] == '1'){
                blueTeam++;
            }
        }else{
            if(current[i] == '1'){
                redTeam++;
            }
        }
    }
    cout << redTeam << " " << blueTeam << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n,k;
        string game;
        cin >> n >> k >> game;
        if(k!=1){
            k=2;
        }
        solve(n,k,game);
    }
    return 0;
}