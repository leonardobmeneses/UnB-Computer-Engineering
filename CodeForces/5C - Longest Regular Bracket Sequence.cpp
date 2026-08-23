/*
 * CodeForces - Longest Regular Bracket Sequence - 5C
 * Link do Desafio: https://codeforces.com/problemset/problem/5/C
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    string input;
    cin >> input;

    vector<char> character;
    int longest = 0;
    int sequences = 0;
    int count = 0;
    for(char c : input){
        while(!character.empty()){
            if(c == '('){
                character.push_back(c);
            }else if(character.back() == '('){
                character.pop_back();
                count++;
            }else{
                character.pop_back();
                break;
            }
        }
        if(character.empty()){
            character.push_back(c);
            sequences++;
        }
        if(count > longest) longest = count;
        count = 0;
    }
    if(longest == 0){
        cout << "0 1" << "\n";
    }else{
        cout << longest << " " << sequences << "\n";
    }
    return 0;
}