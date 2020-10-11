#include<stdio.h>
enum OS {
	Symbian,
	EmbeddedLinux,
	WindowsCE,
	VxWorks,
	QNX
};
struct circle {
	float x, y, radius, length;
};
struct keyboard {
	unsigned num : 1;
	unsigned caps : 1;
	unsigned scroll : 1;
};
union task3 {
	int m;
	struct keyboard c;
};
int main(void)
{
	enum OS a = Symbian;
	printf("Task1: %d\n", a);

	struct circle b = { 0,0,5 };
	b.length = 2 * b.radius * 3.14;
	printf("Task2: %f\n", b.length);

	union task3 d;
	scanf_s("%x", &d.m);
	printf("Task3: ScrollLock: %x\nCapsLock: %x\nNumLock: %x", d.c.scroll,d.c.caps,d.c.num);
}
