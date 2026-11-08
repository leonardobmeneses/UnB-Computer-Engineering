#include <bits/stdc++.h>
using namespace std;

void gcd(int n, int m){
    int passos = 0;
    int resultado;
    for(int i=min(m,n); i >= 1; i--){
        passos++;
        if(m%i == 0 && n%i == 0){
            resultado = i;
            break;
        }
    }
    cout << "O gcd convencional disse que a resposta eh " << resultado << " e fez em " << passos << " passos\n"; 
}

void euclides(int n, int m){
    int passos = 0;
    int resultado;
    int a = max(n,m);
    int b = min(n,m);
    while(b != 0){
        passos++;
        int resto = a % b;
        a = b;
        b = resto;
    }
    resultado = a;
    cout << "Por outro lado, o euclides disse que a resposta eh " << resultado << " e fez em " << passos << " passos\n"; 
}
int main(){
    int n,m;
    cout << "Digite dois numeros que vamos fazer o gcd entre eles: ";
    cin >> n >> m;
    gcd(n,m);
    euclides(n,m);
    return 0;
}