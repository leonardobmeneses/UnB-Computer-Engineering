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

    vector<int> stack;
    int longest = 0;
    int count = 1;

    stack.push_back(-1);                //Aqui vamos deixar o topo da stack com -1 para cobrirmos o caso de ()
    for(int i=0; i<(int)input.length(); i++){
        if(input[i] == '('){            
            stack.push_back(i);         //vamos colocar o indice de ( no final da stack
        }else{
            stack.pop_back();           //se for ) a gente de qualquer maneira tira o indice que está no topo da stack
            if(stack.empty()){
                stack.push_back(i);     //se a stack estiver vazia quer dizer que perdemos o -1 e precisamos de uma nova base
            }else{
                int currentSize = i - stack.back();     //vai ser o indice atual - o topo da stack
                if(currentSize > longest){
                    longest = currentSize;
                    count = 1;
                }else if(currentSize == longest){
                    count++;
                }
            }
        }
    }
    cout << longest << " " << count << "\n";
    return 0;
}