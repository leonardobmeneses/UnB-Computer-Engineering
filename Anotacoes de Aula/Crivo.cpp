#include <bits/stdc++.h>
using namespace std;

vector<bool> solve(int n){
    vector<bool> primos(n+1, true);
    primos[0] = false;
    primos[1] = false;
    for(int i=2; i*i <= n; i++){
        if(primos[i]){
            for(int j=i*i; j<=n; j+=i){
                primos[j] = false;
            }
        }
    }
    return primos;
}

int main(){
    int n;
    cout << "Digite um numero que diremos quantos e quais numeros primos tem ate ele: ";
    cin >> n;
    int qtd = 0;
    vector<bool> resultado = solve(n);
    for(int i=2; i<=n; i++){
        if(resultado[i]){
            qtd++;
            cout << i << " ";
        }
    }
    cout << "\nA quantidade de numeros primos sao: " << qtd << "\n";
    return 0;
}