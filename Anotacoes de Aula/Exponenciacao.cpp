#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 1e9 + 7;

void pot(ll base, ll expoente){
    ll resultado = 1;
    while(expoente > 0){           
        if(expoente & 1){
            resultado = (resultado * base) % MOD;
        }
        base = (base * base) % MOD;
        expoente = expoente >>= 1;
    }
    cout << resultado << "\n";
}


int main(){
    ll n,m;
    cout << "Escolha um numero para ser a base e um numero para ser o expoente: ";
    cin >> n >> m;
    pot(n,m);
    return 0;
}