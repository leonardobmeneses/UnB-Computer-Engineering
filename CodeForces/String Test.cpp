/*
 * CodeForces - String Test
 * Link do Desafio: https://codeforces.com/problemset/problem/118/A
 * * Autor: Leonardo Meneses
 */
 
#include <iostream>
#include <string.h>

using namespace std;

int main(){
	string word;
	cin >> word;
	string finalWord = "";
	for(int i=0; i<word.length(); i++){
		if(word[i] >= 65 && word[i] <= 90)
			word[i] = word[i] + 32;
		if(word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && 
		   word[i] != 'u' && word[i] != 'y'){
		   finalWord += '.';
		   finalWord += word[i];
		   }
	}
	cout << finalWord << endl;
	return 0;
}