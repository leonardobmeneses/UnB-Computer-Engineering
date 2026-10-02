/*
 * CSES - Creating Strings
 * Link do Desafio: https://cses.fi/problemset/task/1622/
 * * Autor: Leonardo Meneses
 */


#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr)
#define ll long long

int main(){
    FASTIO;
    string characters;
    cin >> characters;
    sort(characters.begin(), characters.end());
    vector<string> ans;
    do{
        ans.push_back(characters);
    }while(next_permutation(characters.begin(), characters.end()));
    cout << (int)ans.size() << "\n";
    for(string s : ans){
        cout << s << "\n";
    }
    return 0;
}