#include <stdio.h>
#include <malloc.h>
int main(void)
{
	//Task1
	int a[4],*p,*b;
	a[0] = -1;
	a[1] = -12;
	a[2] = -123;
	a[3] = -1234;
	p = a;
	for (int i = 0;i < 4;i++)
		printf("%d \n", *(p + i));
	//Task2
	b = (int*)malloc(4 * sizeof(int));
	b[0] = -1;
	b[1] = -12;
	b[2] = -123;
	b[3] = -1234;
	for (int i = 0;i < 4;i++)
		printf("%d ", b[i]);
	free(b);
}
