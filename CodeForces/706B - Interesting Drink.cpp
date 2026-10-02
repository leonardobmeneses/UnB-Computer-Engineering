/*
 * CodeForces - Interesting Drink - 706B
 * Link do Desafio: https://codeforces.com/problemset/problem/706/B
 * * Autor: Leonardo Meneses
 */

#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr)
#define ll long long

int main(){
    FASTIO;
    int n;
    cin >> n;
    vector<int> prices(n);
    for(int i=0; i<n; i++){
        cin >> prices[i];
    }
    sort(prices.begin(), prices.end());
    int shops;
    cin >> shops;
    for(int i=0; i<shops; i++){
        int coins;
        cin >> coins;
        auto it = upper_bound(prices.begin(), prices.end(), coins) - prices.begin();
        cout << it << "\n";
    }
    return 0;
}