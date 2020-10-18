#ifndef TRIANGLE_H
#define TRIANGLE_H
struct Triang {
	float x1, x2, x3, y1, y2, y3;
};
float Perimeter(struct Triang a);
float Area(struct Triang a);
#endif
