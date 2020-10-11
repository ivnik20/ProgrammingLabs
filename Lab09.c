#include <stdio.h>
#include<math.h>
int main(void)
{
	char s[80];
	gets_s(s, 80);
	int c = 0, z = 0, p = 0;
	for (int i = 0;i < sizeof(s);i++) {
		if (s[i] >= '0' && s[i] <= '9')
			c++;
		else if (s[i] >= 'A' && s[i] <= 'X')
			z++;
		else if (s[i] >= 'a' && s[i] <= 'x')
			p++;
	}
	printf("%d %d %d\n", c, z, p);
	int n,f=0;
	scanf_s("%d", &n);
	printf("2 ");
	for (int i = 3;i <= n;i++) {
		f = 0;
		for (int j = 2;j <= sqrt(i);j++) {
			if (i % j == 0) {
				f = 1;
				break;
			}
		}
		if (f == 0)
			printf("%d ", i);
			
	}
}
