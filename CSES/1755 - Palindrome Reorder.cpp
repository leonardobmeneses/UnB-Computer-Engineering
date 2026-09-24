/*
 * CSES - Palindrome Reorder
 * Link do Desafio: https://cses.fi/problemset/task/1755/
 * * Autor: Leonardo Meneses
 */


#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr)

int count(int alphabet[26]){
    int isOdd = 0;
    for(int i=0; i<26; i++){
        if(alphabet[i] % 2 != 0){
            isOdd++;
        }
    }
    return isOdd;
}

bool isPossible(int isOdd, int n){
    if((n%2==0 && isOdd == 0) || (n%2!=0 && isOdd == 1)){
        return true;
    }
    return false;
}

int main(){
    FASTIO;
    string input;
    cin >> input;
    int n = input.size();
    int alphabet[26] = {0};
    for(char c : input){
        alphabet[c - 'A']++;
    }
    int isOdd = count(alphabet);
    if(isPossible(isOdd,n)){
        string finalWord;
        if(n%2 == 0){
            string half = "";
            for(int i=0; i<26; i++){
                half += string(alphabet[i] / 2, 'A' + i);
            }
            finalWord = half;
            reverse(half.begin(), half.end());
            finalWord += half;
        }else{
            string half = "";
            int odd;
            for(int i=0; i<26; i++){
                if(alphabet[i]%2==0){
                    half += string(alphabet[i] / 2, 'A' + i);
                }else{
                    odd = i;
                }
            }
            finalWord = half;
            finalWord += string(alphabet[odd], 'A' + odd);
            reverse(half.begin(), half.end());
            finalWord += half;
        }
        cout << finalWord << "\n";
    }else{
        cout << "NO SOLUTION\n";
    }
    return 0;
}