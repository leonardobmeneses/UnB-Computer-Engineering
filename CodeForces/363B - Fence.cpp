/*
 * CodeForces - Fence - 363B
 * Link do Desafio: https://codeforces.com/problemset/problem/363/B
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr)
#define ll long long

int main(){
    FASTIO;
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for(int i=0; i<n; i++) {
        cin >> h[i];
    }
    ll current_sum = 0;
    for(int i=0; i<k; i++) {
        current_sum += h[i];
    }
    ll min_sum = current_sum;
    int min_index = 1;
    for(int i=k; i<n; i++) {
        current_sum = current_sum - h[i-k] + h[i];
        if(current_sum < min_sum){
            min_sum = current_sum;
            min_index = (i-k+2); 
        }
    }
    cout << min_index << "\n";
    return 0;
}