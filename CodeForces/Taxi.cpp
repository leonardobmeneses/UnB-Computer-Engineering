/*
 * CodeForces - Taxi
 * Link do Desafio: https://codeforces.com/problemset/problem/158/B
 * * Autor: Leonardo Meneses
 */

#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int one = 0;
	int two = 0;
	int three = 0;
	int four = 0;
	for(int i=0; i<n; i++){
		int people;
		cin >> people;
		if(people == 1)
			one++;
		else if(people == 2)
			two++;
		else if(people == 3)
			three++;
		else
			four++;	
	}
	int total = four;
	while(three != 0){
		if(three != 0 && one != 0){
			total++;
			three--;
			one--;
		}else if(three != 0 && one == 0){
			total++;
			three--;
		}
	}
	while(two != 0){
		if(two % 2 == 0){
			total++;
			two -= 2;
		}else if(two % 2 != 0 && one % 2 == 0){
			total++;
			two--;
			one -= 2;
		}else if(two % 2 != 0 && one % 2 != 0){
			total++;
			two--;
			one--;
		}
	}
	
	while(one > 0){
		total++;
		one -= 4;
	}
	cout << total << endl;
	return 0;
}