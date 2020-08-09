#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>



long long fac(int n){
  if(n == 1 || n == 0) return 1;
  return (fac(n-1) + fac(n-2)) % 1234567;

}


long long solution(int n) {
  long long answer = 0;

//  long long tem;
  answer = fac(n);
  
  //answer %= 1234567;
  printf("%lld\n", answer);
  return answer;
}

int main(){

  int n = 1999;
  solution(n);
  return 0;
}