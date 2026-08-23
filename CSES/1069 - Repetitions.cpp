/*
 * CSES - Repetitions
 * Link do Desafio: https://cses.fi/problemset/task/1069
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string sequence;
    cin >> sequence;
    int sequenciaMaior = 1;
    int sequenciaAtual = 1;
    for(int i=1; i<sequence.length(); i++){
        if(sequence[i] == sequence[i-1]){
            sequenciaAtual++;
            if(sequenciaAtual > sequenciaMaior){
                sequenciaMaior = sequenciaAtual;
            }
        }else{
            sequenciaAtual = 1;
        }
    }
    cout << sequenciaMaior << "\n";
    return 0;
}