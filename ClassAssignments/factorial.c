#include <stdio.h>

int factorial(int x){
  if((x==1) || (x==0)){
    return 1;
  }
  else{
    return x*factorial(x-1);
  }
}
int main(){
  printf("%d",factorial(100));
  printf("%d", -5%4);

  return 0;
}