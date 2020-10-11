#include <stdio.h>
int main()
{
	int a,b;
	scanf_s("%d", &a);
	printf("%d\n", ((a > -100) && (a < 100)));
	scanf_s("%d", &b);
	printf("%d", b & 256);
}
