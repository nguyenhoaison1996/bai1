#include<stdio.h>
#include<math.h>
int a,b,c;
float delta;
float x1, x2;

void main()
{
	// nhap hien thi gia tri abc
	printf("\r\nnhap gia tri cua a = ");
	scanf_s("%d",&a);
	printf(" gia tri a = %d\r\n",a);
	printf("\r\nnhap gia tri cua b = ");
	scanf_s("%d",&b);
	printf("gia tri b = %d\r\n",b);
	printf("\r\nnhap gia tri cua c = ");
	scanf_s("%d",&c);
	printf("gia tri c = %d\r\n",c);
	//nhap bieu thuc
	delta = (b *b) - 4 * a*c;

	printf("\r\ndelta = %f", delta);
	// dieu kien
	if (delta>0)
	{
		x1 = (-b +sqrt(delta) )/ (2 * a);
		x2 = (-b - sqrt( delta)) / (2 * a);
		printf("\r\ngia tri cua x1 la %f", x1);
		printf("\r\ngia tri cua x2 la %f", x2);



	}
	else if (delta==0)
	{
		x1 = -b / (2 * a);
		x2 = -b / (2 * a);
		printf("\r\ngia tri cua x1 la %f", x1);
		printf("\r\ngia tri cua x2 la %f", x2);
	}
	else
	{
		printf("phuong trinh vo nghiem");
	}
	
}