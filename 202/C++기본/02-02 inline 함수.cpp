// cout, endl 객체를 가지고 있음
#include <iostream>
// std:: 안써도 된다
using namespace std;

// pre컴파일러가 처리(코드를 치환해줌)
// 자료형에 영향받지 않음
// 디버깅 불편
//#define jegob(A)	((A) * (A))


// 실제 함수가 호출되지 않음
// 컴파일러가 처리(코드를 치환해줌)
// 자료형에 영향받음
// 디버깅이 수월함
inline int jegob(int A)
{
	return A * A;
}

int main(void)
{
	cout << jegob(3+1) << endl;			// 16
	cout << ((3+1) * (3+1)) << endl;	// 16 
	return 0;
}