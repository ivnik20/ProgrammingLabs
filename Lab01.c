#include<stdio.h>
int main(void)
{
	int a;
	char s[80];
	gets_s(s,80);
	scanf_s("%d", &a);
	printf("%s\n%d", s,a);
}
