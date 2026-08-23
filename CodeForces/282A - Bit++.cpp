/*
 * CodeForces - Bit++ - 282A
 * Link do Desafio: https://codeforces.com/problemset/problem/282/A
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int repetitions;
    cin >> repetitions;
    int x = 0;
    for(int i=0; i<repetitions; i++){
        string comand;
        cin >> comand;
        if(comand[1] == '+'){
            x++;
        }else{
            x--;
        }
    }
    cout << x << "\n";
    return 0;
}