#include <stdio.h>
int main(){ 

int a,b,c;

printf("Nhap a =\n");
scanf("%d", &a); 
printf("Nhap b =\n"); 
scanf("%d", &b); 
printf("Nhap c =\n"); 
scanf("%d", &c); 
if((a - c) < b && b < (a + c)) { 
printf("La 3 canh cua tam giac"); 

} else { 
printf("khong phai la 3 canh cua tam giac"); 
}
return 0;
}
