#include<stdio.h>
#include<math.h>
int main(void) {
	float x1, x2, a, b;
	scanf_s("%f%f", &a, &b);
	x1 = (cos(a) - cos(b)) * (cos(a) - cos(b)) - (sin(a) - sin(b)) * (sin(a) - sin(b));
	x2 = -4 * pow(sin(((a - b) / 2)), 2) * cos(a + b);
	printf("%f\n%f", x1, x2);
}