/*
 * CodeForces - Way Too Long Words
 * Link do Desafio: https://codeforces.com/problemset/problem/71/A
 * * Autor: Leonardo Meneses
 */

#include <iostream>
#include <string.h>
 
using namespace std;
 
int main(){
  int n;
  cin >> n;
  for(int i=0; i<n; i++){
    string word;
    cin >> word;
    int number = word.length()-2;
    if(number <= 8){
      cout << word << endl;
    }else{
      cout << word[0] << number << word[number+1] << endl;
    }
    
  }
  return 0;
}