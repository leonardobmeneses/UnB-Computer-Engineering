#include <bits/stdc++.h>
using namespace std;

void imprime(vector<int> divisores){
    cout << "A quantidade de divisores eh: " << divisores.size() << endl;
    cout << "Os divisores sao:\n";
    while(!divisores.empty()){
        cout << divisores.back() << endl;
        divisores.pop_back();
    }
}

void calculo(int n){
    vector<int> divisores;
    for(int i=1; i*i <= n; i++){         //se n = 46, eu vou ate o 6, pois assim consigo achar todos os divisores
        if(n%i == 0){
            divisores.push_back(i);
            if(i != n/i){
                divisores.push_back(n/i);
            }
        }
    } 
    sort(divisores.begin(), divisores.end());
    imprime(divisores);
}

int main(){
    int n;
    cout << "Digite um numero e vamos quantos divisores tem e quais sao eles: ";
    cin >> n;
    calculo(n); 
    return 0;
}