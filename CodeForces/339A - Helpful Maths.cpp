/*
 * CodeForces - Helpful Maths - 339A
 * Link do Desafio: https://codeforces.com/problemset/problem/339/A
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr)
#define ll long long

int main(){
    FASTIO;
    string s;
    cin >> s;
    string x = "";
    for(int i=0; i<(int)s.size(); i+=2){
        x += s[i];
    }
    sort(x.begin(), x.end());
    for(int i=0; i<(int)x.size(); i++){
        if(i < (int)x.size() - 1){
            cout << x[i] << "+";
        }else{
            cout << x[i] << "\n";
        }
    }
    return 0;
}