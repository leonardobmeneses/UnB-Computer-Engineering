/*
 * Beecrowd - Problema 1912 - Ajude Seu Madruga
 * Link do Desafio: https://judge.beecrowd.com/pt/problems/view/1912
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr)
#define ll long long

double verifica(const vector<ll> &v, int n, double meio){
    double chute = 0;
    for(int i=0; i<n; i++){
        if(v[i] > meio){
            chute += v[i] - meio;
        }
    }
    return chute;
}

double busca(const vector<ll> &v, int n, int a, double max_altura){
    double inicio = 0.0;
    double fim = max_altura;
    for(int i=0; i<100; i++){
        double meio = inicio + (fim - inicio) / 2.0;
        double chute = verifica(v, n, meio);
        if(chute >= a){
            inicio = meio;
        }else{
            fim = meio;
        }
    }
    return inicio;
}

int main(){
    FASTIO;
    int n,a;
    while(cin >> n >> a){
        if(n == 0 && a == 0){
            return 0;
        }
        vector<ll> v(n);
        ll soma = 0;
        double altura_max = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            soma += v[i];
            if(v[i] > altura_max) altura_max = v[i];
        }
        if(soma == a){
            cout << ":D\n";
            continue;
        }else if(soma < a){
            cout << "-.-\n";
            continue;
        }
        sort(v.begin(), v.end());
        double ans = busca(v,n,a,altura_max);
	    cout << fixed << setprecision(4);
	    cout << ans << "\n";
    }
    return 0;
}