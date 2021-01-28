#include <stdio.h>
 
int main() 
{
    int a, b, c;
 
    printf("Nhap a, b, c \n");
    scanf("%d%d%d", &a, &b, &c);
 
    int max = a;
    if(max < b) 
    {
        max = b;
    }
 
    if(max < c) {
        max = c;
    }
 
    printf("So lon nhat la %d\n", max);
 
    return 0;
}

