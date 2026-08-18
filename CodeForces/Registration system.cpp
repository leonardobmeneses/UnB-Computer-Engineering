/*
 * CodeForces - Registration system
 * Link do Desafio: https://codeforces.com/problemset/problem/4/C
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <map>

using namespace std;

int main(){
	int n;
	cin >> n;
	map <string, int> bancoDados;
	for(int i=0; i<n; i++){
		string nome;
		cin >> nome;
		if(bancoDados[nome] == 0){
			cout << "OK\n";
		}else{
			cout << nome << bancoDados[nome] << endl;
		}	
		bancoDados[nome]++;
	}

	return 0;
}