#include <iostream> // cout, endl 객체를 가지고 있음
#include <string>	// string 클래스를 가지고 있음

using namespace std;

class Student
{
private:
	int nHakbun;
	string sName;

	// 생성자 : 객체가 생성될 때, 호출되는 함수
	// 디폴트 생성자를 컴파일러가 만들어준다
	// Student(){}
};


int main(void)
{
	Student stu1;
	Student stu2 = Student();

	return 0;
}