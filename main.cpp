#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long t[2500];
/*
long long fac(int n){
  if(n == 1 || n == 0) return t[n] = 1;
  return t[n] = (fac(n-1) + fac(n-2)) % 1234567;
}
*/
/*
long long fac(int n){
  if(n < 2) return 1;
  int i;
  int a = 1, b = 1, z;
  for(i = 0; i < n - 1; i++){
    z = b;
    b = a + b % 1234567;
    a = z;
  }
  return b;
}*/

long long fac(int n){
  long long a[n+1];
  if(n < 2) return 1;
  a[1] = 1;
  a[0] = 1;
  int i;
  for(i=2; i<=n; i++){
  a[i] = (a[i-1] + a[i-2]) % 1234567;
  }
  return a[n];
}
long long solution(int n) {
  long long answer = 0;


  answer = fac(n);
  //answer %= 1234567;
  printf("%lld\n", answer);
  return answer;
}

int main(){

  int n = 500;
  solution(n);
  return 0;
}