#include <stdio.h>
int main() 
{
    int a, b,i;
    scanf("%d\n%d", &a, &b);
    char *str[]={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  	for(i=a;i<=b;i++)
          printf("%s \n", i>=1&&i<=9?str[i-1]:(i%2==0?"even":"odd"));
    return 0;
}
