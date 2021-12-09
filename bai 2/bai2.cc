#include <stdio.h>
int x;
void main()
{

	printf("nhap gia tri x=");
	scanf_s("%x", &x);
	printf("gia tri cua value la %x", x);
	int value = x;
	int a = 0x00ff;

	int hight = value >> 8;

	int low = value & a;
	printf("gia tri hight la %x gia tri cua low %x  \r\n", hight, low);


}
