include <stdio.h>

int main() {
  int a[4];
  int i, tong = 0;
  a[0] = 3; a[1] = 5; a[2] = 7; a[3] = 2;
    printf("%d ", a[0]);
    printf("%d ", a[1]);
    printf("%d ", a[2]);
    printf("%d ", a[3]);
  //tinh tong
  for(int i = 0; i < 4; i++){
 tong = tong + a[i];
 } 
printf("tong cac so tu day tren = %d", tong);

return 0;
}
