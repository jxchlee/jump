#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long fac(int n){
  if(n == 1 || n == 0) return 1;
  return n * fac(n-1);
}


long long solution(int n) {
  long long answer = 0;
  int one =n, two;
  int tem=0;

  for(two=0; 2*two<=n; two++){
    one = n - 2 * two;
    printf("%d %d\n", one, two);
    tem = (fac(one + two) / (fac(one) * fac(two))) % 1234567;
    printf("%d\n", tem);
  }

  answer %= 1234567;
  printf("%lld\n", answer);
  return answer;
}

int main(){

  int n = 4;
  solution(n);
  return 0;
}