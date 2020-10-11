#include<stdio.h>
int main(void)
{
	int a,b;
	scanf_s("%x", &a);
	printf("%o\n%o\n%o\n", a,a<<1,~a);
	scanf_s("%o", &b);
	printf("%o", a & b);
}
