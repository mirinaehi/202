// cout, endl 객체를 가지고 있음
#include <iostream>
// std:: 안써도 된다
using namespace std;

int main(void)
{
	int a;

	// 참조로 a값을 바꿈
	int& ra = a;
	ra = 30;
	cout << a << endl;	// 30

	// 포인터로 a값을 바꿈
	int* pa = &a;
	*pa = 50;
	cout << a << endl;	// 50


}