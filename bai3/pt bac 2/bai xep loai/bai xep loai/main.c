#include<stdio.h>
void main()
{
	float x=0;
	printf("nhap vao diem trung binh =");
	scanf_s("%f", &x);
	printf(" gia tri cua x = %f", x);
	if (x >= 8.5)
	{
		printf("\r\n ban la hoc sinh pro nhat lop");

	}
	else if (x < 8.5 && x >= 6.5)
	{
		printf("\r\n kha cung ok rui");
	}
	else if (x < 6.5 && x >= 5.0)
	{
		printf("\r\n binh thuong thui");


	}
	else
		printf("\r\n ko dat");
	
}