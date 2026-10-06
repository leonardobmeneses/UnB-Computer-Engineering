/*
 * CodeForces - Beautiful Year - 271A
 * Link do Desafio: https://codeforces.com/problemset/problem/271/A
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr)
#define ll long long

int main(){
    FASTIO;
    int y;
    cin >> y;
    while(true){
        y++;
        int milhar = y/1000;
        int centena = (y/100) % 10;
        int dezena = (y/10) % 10;
        int unidade = y % 10;
        if(milhar != centena && milhar != dezena && milhar != unidade &&
            centena != dezena && centena != unidade && dezena != unidade){
            cout << y << "\n";
            break;
        }
    }
}