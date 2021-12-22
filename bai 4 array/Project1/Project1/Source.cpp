#include<stdio.h>
void main()
{
	int a[10] = { 3,4,2,5,6,4,5,7,8,10 };
	sizeof a;
	int x = sizeof a/4 ;
	for (int i = 0; i < x; i++) {
		if (a[i] % 2 == 0) {
			printf("%d ", a[i]);
		}
	}
}