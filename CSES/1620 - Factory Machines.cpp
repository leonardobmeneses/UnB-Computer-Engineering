/*
 * CSES - Factory Machines
 * Link do Desafio: https://cses.fi/problemset/task/1620/
 * * Autor: Leonardo Meneses
 */


#include <bits/stdc++.h>
using namespace std;
 
#define FASTIO ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
 
bool check(ll mid, vector<ll> each, int products){
	ll feitos = 0;
	for(int i=0; i<(int)each.size(); i++){
		feitos += mid/each[i];
		if(feitos >= products){
			return true;
		}
	}
	return false;
}
 
ll solve(int products, vector<ll> each){
	sort(each.begin(), each.end());
	ll start = 1;
	ll end = each[0] * products;
	ll ans = end;
	while(start <= end){
		ll mid = start+(end-start)/2;
		if(check(mid, each, products)){
			ans = mid;
			end = mid - 1; 	
		}else{
			start = mid + 1;
		}
	}
	return ans;		
}
 
int main(){
	FASTIO;
	int machines, products;
	cin >> machines >> products;
	vector<ll> each(machines);
	for(int i=0; i<machines; i++){
		cin >> each[i];		
	}
	ll ans = solve(products, each);
	cout << ans << "\n";
	return 0;
}
