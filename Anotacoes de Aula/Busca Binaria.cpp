#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
int main(){
    vi v= {0, 2, 5, 7, 14, 25, 36, 40};
    int inicio = 0;
    int fim = v.size() - 1;
    int ans;
    while(inicio <= fim){
        int meio = inicio + (fim - inicio)/2;
        if(v[meio] == 7){
            ans = meio;
            break;
        }else if(v[meio] > 7){
            fim = meio - 1;
        }else{
            inicio = meio + 1;
        } 
    }
    cout << ans << endl;
    return 0;
}