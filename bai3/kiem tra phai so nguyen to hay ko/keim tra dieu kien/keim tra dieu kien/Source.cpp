#include<stdio.h>
void main()
{
	int n = 0;
	int dem = 0;
	do
	{
		printf("\r\nnhap gia tri cua n =");
		scanf_s("%d", &n);
		printf("\r\nn = %d", n);
	} while (n <= 0);
	{
		for (int i = 1; i <= n; i++)
		{
			if (n%i==0)
			{
				dem++;
			}
		}
		
	}
	if (dem ==2)
	{
		printf("la so nguyen to khong sai\r\n");

	}
	else
	{
		printf("khong phai so nguyen to\r\n");
	}
}