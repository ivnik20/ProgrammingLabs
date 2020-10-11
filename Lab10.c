#include <stdio.h>
int nod(int a, int b) {
	int i, l;
	for (;;) {
		if (b > a) {
			i = b;
			b = a;
			a = i;
		}
		if (a % b == 0) {
			l = b;
			break;
		}
		else {
			a = a % b;
		}
	}
	return(l);
}
int nok(int a, int b) {
	return(a * b / nod(a, b));
}
int sumofdigits(int a) {
	if (a > 0) {
		int sum = 0;
		sum += a % 10;
		a /= 10;
		sum += sumofdigits(a);
		return(sum);
	}
	else {
		return(0);
	}
}
int main(void)
{
	int a, b, c;
	scanf_s("%d%d", &a, &b);
	printf("%d %d\n", nod(a, b), nok(a, b));
	scanf_s("%d", &c);
	printf("%d",sumofdigits(c));

}