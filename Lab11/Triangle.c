#include "Triangle.h"
#include "math.h"
#include "stdlib.h"
float length(float x1, float x2, float y1, float y2) {
	return( sqrt(pow(x2 -x1, 2) + pow(y2 - y1, 2)));
}
float Perimeter(struct Triang a) {
	float l1, l2, l3;
	l1 = length(a.x1,a.x2,a.y1,a.y2);
	l2 = length(a.x2, a.x3, a.y2, a.y3);
	l3 = length(a.x3, a.x1, a.y3, a.y1);
	return(l1 + l2 + l3);
}
float Area(struct Triang a) {
	float l1, l2, l3;
	l1 = length(a.x1, a.x2, a.y1, a.y2);
	l2 = length(a.x2, a.x3, a.y2, a.y3);
	l3 = length(a.x3, a.x1, a.y3, a.y1);
	if (l1 == l2) {
		return(l3 * sqrt(l1 * l1 - l3 * l3 / 4) / 2);
	}
	else if(l3==l1){
		return(l2 * sqrt(l1 * l1 - l2 * l2 / 4) / 2);
	}
	else {
		return(l1 * sqrt(l2 * l2 - l1 * l1 / 4) / 2);
	}
}