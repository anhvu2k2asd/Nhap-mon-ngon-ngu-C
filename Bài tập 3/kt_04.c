#include<stdio.h>
 int main() {
    int n, i, S = 0;
    printf("nhap n: ");
    scanf("%d", &n);
    if ( n > 0) {
        while (n != 0) {
        i = n % 10;
        S += i;
        n = n / 10;
    }
        printf("tong cac chu so cua n la: %d", S);
    } else printf("khong the chay chuong trinh!");
    return 0;
 }
© 2021 GitHub, Inc.
