#include <stdio.h>
void sum (int a, int b, int c);
int sum(int a, int b, int c);

int main(){
  int x = 1, y = 2, z = 3;
  sum(x,y,z);
  return 0;
}
int sum(int a, int b, int c){
  int sum = a + b + c;
  int s = tong(x, y, z);
  printf ("tong: %d", s);
  return 0;
}
void sum(int a, int b, int c){
    int tong = a + b + c;
    printf("tong la: %d", tong);
    }
  int tong ( int a, int b, int c){
    int t = a + b + c;
    return t;
  }
