#include "stdafx.h"
#include "EllipticCurve.h"
#include "Point.h"
#include "Maths_helper.h"

int main()
{
	static unsigned char p[10] = { 0x62, 0xCE, 0x51, 0x77, 0x41, 0x2A, 0xCA, 0x89, 0x9C, 0xF5 };
	static unsigned char a[10] = { 0x39, 0xC9, 0x5E, 0x6D, 0xDD, 0xB1, 0xBC, 0x45, 0x73, 0x3C };
	static unsigned char b[10] = { 0x1F, 0x16, 0xD8, 0x80, 0xE8, 0x9D, 0x5A, 0x1C, 0x0E, 0xD1 };

	static unsigned char xp[10] = { 0x31, 0x5D, 0x4B, 0x20, 0x1C, 0x20, 0x84, 0x75, 0x05, 0x7D };
	static unsigned char yp[10] = { 0x03, 0x5F, 0x3D, 0xF5, 0xAB, 0x37, 0x02, 0x52, 0x45, 0x0A };
	static unsigned char zp[10] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 };

	static unsigned char xq[10] = { 0x06, 0x79, 0x83, 0x4C, 0xEF, 0xB7, 0x21, 0x5D, 0xC3, 0x65 };
	static unsigned char yq[10] = { 0x40, 0x84, 0xBC, 0x50, 0x38, 0x8C, 0x4E, 0x6F, 0xDF, 0xAB };
	static unsigned char zq[10] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 };

	EllipticCurve ec = EllipticCurve(p, a, b);
	Point point_p = Point(xp, yp,zp);
	Point point_q = Point(xq, yq,zq);

	bool test_p = ec.check_point(point_p);
	bool test_q = ec.check_point(point_q);

	Point point_pq = ec.add_point(point_p, point_q);

	Point point_dp = ec.double_point(point_p);
	Point point_dq = ec.double_point(point_q);

	return 0;
}

