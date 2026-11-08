#include <bits/stdc++.h>
using namespace std;
 
#define FASTIO ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
 
int main(){
	FASTIO;
	int n;
	cin >> n;
	vector<ll> apples(n);
	for(int i=0; i<n; i++){
		cin >> apples[i];
	}
	ll smaller = 1e18;
	ll current1 = 0;
	ll current2 = 0;
	for(int mask = 0; mask < (1 << n); mask++){
		for(int i=0; i<n; i++){
			if((mask >> i) & 1){
				current1 += apples[i];
			}else{
				current2 += apples[i];
			}
		}
		smaller = min(smaller, abs(current1 - current2));
		current1 = 0;
		current2 = 0;
	} 
	cout << smaller << "\n";
	return 0;
}