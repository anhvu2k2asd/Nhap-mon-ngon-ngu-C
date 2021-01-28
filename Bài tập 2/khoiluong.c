#include <stdio.h>
int main(void){
  int m;
  scanf("%d", &m);
  printf("m = %dg\n", m * 1000);
  printf("----------\n");
  printf("KG  | G\n");
  printf("----------\n");
  printf("%d", m);
  printf("   |%d", m * 1000);
  return 0;
}
