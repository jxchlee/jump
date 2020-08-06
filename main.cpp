#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long fac(int n){
  if(n == 1 || n == 0) return 1;
  return n * pac(n-1);
}


long long solution(int n) {
  long long answer = 0;
  int one =n, two;

  for(two=0; 2*two<n; two++){
    one = n - 2 * two;
    answer += (fac(one + two) / fac(one) * fac(two)) % 1234567;
  }


    return answer;
}

int main(){

  return 0;
}