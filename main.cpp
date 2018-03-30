// Elliptic $Curve.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "EllipticCurve.h"
#include "Point.h"

int main()
{
	static unsigned int pa[3] = { 0x62CE ,0x5177412A , 0xCA899CF5 };
	static unsigned int ab[3] = { 0x39C9 ,0x5E6DDDB1 , 0xBC45733C };
	static unsigned int bc[3] = { 0x1F16 ,0xD880E89D , 0x5A1C0ED1 };

	int p = 19;
	int a = 2;
	int b = 2;

	EllipticCurve ec = EllipticCurve(p,a,b);
	Point p1 = Point(5, 2, 1);
	Point p2 = Point(3, 4, 1);
	Point p3 = Point(-7, -14, 1);
	bool test=ec.check_point(p3);

	Point p4 = ec.add_point(p1, p2);
	
    return 0;
}

