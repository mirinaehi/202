#include <iostream> // cout, endl ��ü�� ������ ����
#include <string>	// string Ŭ������ ������ ����

using namespace std;

class Student
{
private:
	int nHakbun;
	string sName;

public:
	// ������ : ��ü�� ������ ��, ȣ��Ǵ� �Լ�
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
	this->sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

Student::Student(int Hakbun, string Name)
{
	this->nHakbun = Hakbun;
	this->sName = Name;
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

void Student::show(void)
{
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;
}