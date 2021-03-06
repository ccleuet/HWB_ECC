#pragma once

#include "Point.h"

class EllipticCurve
{

private:
	unsigned char *p;
	unsigned char *a;
	unsigned char *b;

public:
	EllipticCurve();
	EllipticCurve(unsigned char *p, unsigned char *a, unsigned char *b);
	~EllipticCurve();

	unsigned char*  get_a();
	unsigned char*  get_b();
	unsigned char*  get_p();

	void set_p(unsigned char *p);
	void set_a(unsigned char *a);
	void set_b(unsigned char *b);

	bool check_point(Point point);

	Point double_point(Point point);
	Point add_point(Point p1, Point p2);

	void calculate_points();
	Point toAffine(unsigned char *x, unsigned char *y, unsigned char *z);

	void equation(unsigned char *left, unsigned char *right, unsigned char *x, unsigned char *y);
};

