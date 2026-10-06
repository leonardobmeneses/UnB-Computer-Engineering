/*
 * CodeForces - cAPS lOCK - 131A
 * Link do Desafio: https://codeforces.com/problemset/problem/131/A
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
    bool capsAtivado = true;
    for(int i=1; i<s.size(); i++){
        if(islower(s[i])){
            capsAtivado = false;
            break;
        }
    }
    if(capsAtivado){
        for(int i=0; i<s.size(); i++){
            if(islower(s[i])){
                s[i] = toupper(s[0]);
            }else{
                s[i] = tolower(s[i]);
            }
        }
    }
    cout << s << "\n";
}