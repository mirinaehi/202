#include <iostream> // cout, endl 객체를 가지고 있음

using namespace std;

class Point
{
public:
	// 생성자
	Point(int _x, int _y);
	Point(void);

	// 연산자 오버로딩
	Point operator+(const Point& rhs);
	
	void print(void);
	
private:
	int mX;
	int mY;
};

