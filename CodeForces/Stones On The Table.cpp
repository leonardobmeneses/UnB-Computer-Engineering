/*
 * CodeForces - Stones On The Table
 * Link do Desafio: https://codeforces.com/problemset/problem/266/A
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <map>

using namespace std;

int main(){
	int n;
	cin >> n;
	char cor[n];
	for(int i=0; i<n; i++){
		cin >> cor[i];
	}
	int retiradas = 0;
	for(int i=1; i<n; i++){
		if(cor[i-1] == cor[i] || cor[i+1] == cor[i]){
			retiradas++;
			cor[i] = cor[i-1];
		}
	}
	cout << retiradas;
	return 0;
}