#include<stdio.h>

int main(){
	int a;
	int b;
	b = 0;
	printf ("Nhap a = ");
	scanf ("%d",&a);
	for (int i =1; i<=a; i++){
		b = b + i;
	}
	printf ("S = 1 + 2 ... + %d = %d",a,b);
	return 0;
}
