#include <stdio.h>
int main(void)
{
	int dongia, soluong, thanhtien;
	printf("Nhap don gia: ");
	scanf("%d",&dongia);
	printf("Nhap so luong: ");
	scanf("%d",&soluong);
	thanhtien = dongia * soluong;
	if (soluong >=5){
	printf("so tien can thanh toan %d", thanhtien * 75/100);
	}
	else{
	printf("so tien can thanh toan %d", thanhtien);
	}
	return 0;
}
		
