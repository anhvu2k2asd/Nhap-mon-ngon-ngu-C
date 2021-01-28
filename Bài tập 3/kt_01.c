#include<stdio.h>
int main (){
  int a, b, c;
  a = 2, b = 3, c = 4;
  printf("Bang Cuu Chuong 2\n");
  for (int i = 1; i <= 10; i++){
    printf("   %d * %d = %d\n", a, i, a * i);
  }
  printf("Bang Cuu Chuong 3\n");
  for (int i = 1; i <= 10; i++){
    printf("   %d * %d = %d\n", c, i, c * i);
  }
  printf("Bang Cuu Chuong 4\n");
  for (int i = 1; i <= 10; i++){
    printf("   %d * %d = %d\n", c, i, c * i);
  }
    return 0; 
    }
