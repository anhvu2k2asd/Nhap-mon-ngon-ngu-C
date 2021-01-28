#include <stdio.h>

int main()
{
   float a, b, c, x1, x2, x, delta;
            printf("Nhap a =\n");
            scanf("%f", &a);
            printf("Nhap b =\n");
            scanf("%f", &b);
            printf("Nhap c =\n");
            scanf("%f", &c);
    if(a == 0)
    {      
    if(b == 0 && c != 0)
            {
            printf("Phuong trinh vo nghiem\n");
            }
    else if(b == 0 && c == 0)
            {
            printf("Phuong trinh co vo so nghiem\n", x);
            }
    else
            {
            x= -c / b;
            printf("phuong trinh co nghiem = %f", x);
            }
    }
    else
    { 
            delta = b * b - 4 * a * c;
    if(delta < 0)
            {
            printf("Phuong trinh vo nghiem");
            }
    else if(delta == 0)
            {
            x1 = -b / (a * 2);
            printf("Phuong trinh co nghiem kep = %f ", x1);
            }
    else
            {
            x1 = (-b + sqrt(delta)) / (a * 2);
            x2 = (-b - sqrt(delta)) / (a * 2);
            printf("Phuong trinh co nghiem\n x1 = %f\n x2= %f", x1, x2);
            }
    }
return 0;
}
