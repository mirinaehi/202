#include <iostream> // cout, endl 객체를 가지고 있음
#include <string>	// string 클래스를 가지고 있음

using namespace std;

class Student
{
private:
	int nHakbun;
	string sName;

public:
	// 생성자 : 객체가 생성될 때, 호출되는 함수
	Student(void);
	Student(int Hakbun, string Name);

	void show(void);
};


int main(void)
{
	Student stu1;
	stu1.show();

	Student stu2 = Student(1111, "JWP");
	stu2.show();

	return 0;
}


Student::Student(void)
{
	this->nHakbun = 1234;
	this->sName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;
}

Student::Student(int Hakbun, string Name)
{
	this->nHakbun = Hakbun;
	this->sName = Name;
	cout << "학번이 등록되었습니다." << endl;
}

void Student::show(void)
{
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl << endl;
}