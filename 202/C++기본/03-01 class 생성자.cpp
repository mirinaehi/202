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
	Student(void)
	{
		nHakbun = 1234;
		sName = "�̻��";
		cout << "�й��� ��ϵǾ����ϴ�." << endl;
	}

	void show(void)
	{
		cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
		cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;
	}
};


int main(void)
{
	Student stu1;
	stu1.show();

	Student stu2 = Student();
	stu2.show();

	return 0;
}