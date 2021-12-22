#include<stdio.h>
void main()
{
	int a[10] = {3,7,5,9,8,1,2,3,4,5};
	sizeof a;
	int dem =0;
	int x = sizeof a/4;
	for (int i = 0; i < x; i++)
	{
		for (int j = 1; j < a[i]; j++)
		{
			if ( a[i] % j == 0)
			{
				dem ++;
			}
			
		}
		if (dem == 1)
		{
			printf("%d", a[i]);
			dem = dem - 1;
		}
		else
		{
			dem = 0;
		}

	}
}