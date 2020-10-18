#include<stdio.h>
#include<string.h>
#include "Triangle.h"
int main()
{
	struct Triang a;
	scanf_s("%f %f %f %f %f %f", &a.x1, &a.y1, &a.x2, &a.y2, &a.x3, &a.y3);
	printf("Perimeter:%f\nArea:%f", Perimeter(a), Area(a));
}