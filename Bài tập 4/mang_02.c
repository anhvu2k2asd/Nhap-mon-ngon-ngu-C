#include<stdio.h>

int main(){
    int a[100];
    int i,n;
    printf(" kich thuoc n = "); 
    scanf("%d", &n);
    for(i = 0; i < n; i++){
      printf(" phan tu a [%d] = ", i);
      scanf("%d", &a [i]);
  }
    printf(" mang a : ");
    for(i = 0; i < n; i++){ 
      printf("%d ", a[i]);
  }
  n = 3;
  int tong = 0;
  for(int j = 0; j < n; j++ ){
  tong = tong + a[j];
  }
  printf(" tong : %d", tong);
  return 0;
}
© 2021 GitHub, Inc.
