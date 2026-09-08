#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false); cin.tie(nullptr)

void solve(){
    int n;
    cin >> n;
    int vetor[n];
    vector<int> pilha;
    for(int i=0; i<n; i++){
        cin >> vetor[i];
        while(!pilha.empty() && vetor[pilha.back()] >= vetor[i]){
            pilha.pop_back();
        }
        if(pilha.empty()){
            cout << "0 ";
        }else{
            cout << pilha.back() + 1 << " ";
        }
        pilha.push_back(i);
    }
}

int main(){
    FASTIO;
    solve();
    return 0;
}