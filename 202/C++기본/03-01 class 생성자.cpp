#include <iostream> // cout, endl ��ü�� ������ ����
#include <string>	// string Ŭ������ ������ ����

using namespace std;

class Student
{
private:
	int nHakbun;
	string sName;

	// ������ : ��ü�� ������ ��, ȣ��Ǵ� �Լ�
	// ����Ʈ �����ڸ� �����Ϸ��� ������ش�
	// Student(){}
};


int main(void)
{
	Student stu1;
	Student stu2 = Student();

	return 0;
}