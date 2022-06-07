#include <iostream> // cout, endl 객체를 가지고 있음
#include "04-01.h"

using namespace std;

Point::Point(int _x, int _y) : mX(_x), mY(_y) {}
Point::Point(void) {}

void Point::print(void)
{
	cout << "(" << mX << ", " << mY << ")" << endl;
}

Point Point::operator+(const Point& rhs)
{
	Point p;
	p.mX = mX + rhs.mX;
	p.mY = mY + rhs.mY;

	return p;
}