#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void swap(int  &n1, int  &n2){
  
  int z = n1;
  n1 = n2;
  n2 = z;
  
}

long long fac1(int n1, int n2){
  if(n1>n2){
  swap(n1, n2);
  }
  if(n1 == 0) return 1;
  printf("%d %d\n", n1, n2);
  return (n2+n1) * fac1(n1 - 1, n2);
}

long long fac2(int n1, int n2){
  if(n1>n2){
  swap(n1, n2);
  }
  if(n1 == 0) return 1;
  return n1 * fac2(n1 - 1, n2);
}


long long solution(int n) {
  long long answer = 0;
  int one, two;
  long long tem=0;

  for(two=0; 2*two<=n; two++){
    one = n - 2 * two;
    printf("%d %d\n", one, two);
    tem = (fac1(one, two) / fac2(one, two)) % 1234567;
    answer += tem;
    printf("%lld\n", tem);
  }

  answer %= 1234567;
  printf("%lld\n", answer);
  return answer;
}

int main(){

  int n = 10;
  solution(n);
  return 0;
}