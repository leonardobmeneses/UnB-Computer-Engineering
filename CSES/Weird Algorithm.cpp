/*
 * CSES - Weird Algorithm
 * Link do Desafio: https://cses.fi/problemset/task/1068
 * * Autor: Leonardo Meneses
 */

#include <iostream>
 
using namespace std;
 
long long conta(long long n){
  if(n==1){
    return 0;
  }
  
  if(n%2==0){
    n = n/2;
  }else{
    n = n*3+1;
  }
  cout << n << " ";
  return conta(n);
}
 
int main(){
  long long n;
  cin >> n;
  cout << n << " ";
  conta(n);
  return 0;
}