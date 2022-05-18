#include <iostream> // cout, endl 객체를 가지고 있음
#include <string>	// string 클래스를 가지고 있음

using namespace std;

class Student
{
private:
	int nHakbun;
	char* sName;

public:
	// 생성자 : 객체가 생성될 때, 호출되는 함수
	Student(void);
	Student(int Hakbun, const char* Name);

	void show(void);
};


int main(void)
{
	Student stu1 = Student(1111, "JWP");
	stu1.show();

	return 0;
}


Student::Student(void)
{
}

Student::Student(int Hakbun, const char* Name)
	// 객체생성과 동시에 멤버변수 초기화 // 멤버변수(매개변수)
	// const/참조형 멤버변수를 사용할 수 있다.
	: nHakbun(Hakbun)
{
	cout << "일반생성자 호출" << endl;
	int len = strlen(Name) + 1;		// 공간개수 측정
	sName = new char[len];			// 공간생성
	strcpy(sName, Name);
}

void Student::show(void)
{
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl << endl;
}