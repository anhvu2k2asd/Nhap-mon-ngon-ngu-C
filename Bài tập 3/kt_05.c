#include<stdio.h>

int main() {
    int n, chan = 0, le = 0;
    printf("nhap n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0)
            chan += i;
        if(i % 2 == 1)
            le += i;
    }
        printf("tong so chan la: %d \n",chan);
        printf("tong so le la: %d", le);
        
}
