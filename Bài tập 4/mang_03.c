#include<stdio.h>

int main(){
    int a[100];
    int i,n;
    printf(" Nhap kich thuoc n = ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
      printf("\n Nhap phan tu a [%d] = ", i);
      scanf("%d", &a [i]);
  }
    printf (" \n");
    printf(" Mang a : ");
    for(i = 0; i < n; i++){ 
      printf("%d ", a[i]);
  int demchan = 0;
  for (int k = 0; k < n; k++)
  if(a[k] % 2 == 0 && a[k] != 0)
    demchan = demchan + 1;
    printf (" \n");
    printf(" \n So cac so chan: %d", demchan);
}
int tongle = 0;
  for(int j = 0; j < n; j++ ){
    if(a[j] % 2 == 1)
      tongle = tongle + a[j];
  }
  printf (" \n");
  printf("\n Tong cac so le : %d", tongle);
{
  int demle = 0;
  for (int l = 0; l < n; l++)
  if (a[l] % 2 == 1 && a[l] != 0)
    demle = demle + 1;
    printf (" \n");
    printf("\n So cac so le : %d", demle);
}

  return 0;
}
