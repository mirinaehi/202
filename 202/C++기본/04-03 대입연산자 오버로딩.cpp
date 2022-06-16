#include <iostream> // cout, endl ��ü�� ������ ����
#include <string>	// string Ŭ������ ������ ����

using namespace std;

class Student
{
private:
	int nHakbun;
	char* sName;

public:
	// ������ : ��ü�� ������ ��, ȣ��Ǵ� �Լ�
	Student(void);
	Student(int Hakbun, const char* Name);
	Student(const Student& rhs);

	// �Ҹ��� : ��ü�� �޸𸮿��� ������ ��, ȣ��Ǵ� �Լ�
	~Student();
	
	// ������ �����ε�
	Student& operator=(const Student& rhs);

	void show(void);
};

class HighSchoolStudent : public Student
{
public:
	// ������
	HighSchoolStudent(int Hakbun, const char* Name, string Hakgwa) 
		: Student(Hakbun, Name), sHakgwa(Hakgwa) 
	{
		cout << "HighSchoolStudent �Ϲݻ����� ȣ��" << endl;
	}
	
	// �Ҹ���
	~HighSchoolStudent() 
	{
		cout << "HighSchoolStudent �Ҹ��� ȣ��" << endl;
	}
private:
	string sHakgwa;
};


int main(void)
{
	HighSchoolStudent hss = HighSchoolStudent(1111, "JWP", "soft");
	hss.show();		// �θ�Ŭ������ ����Լ��� ȣ��(�ڽĿ� ������ X)
	return 0;
}


Student::Student(void)
{
}

Student::Student(int Hakbun, const char* Name)
	// ��ü������ ���ÿ� ������� �ʱ�ȭ // �������(�Ű�����)
	// const/������ ��������� ����� �� �ִ�.
	: nHakbun(Hakbun)
{
	cout << "Student �Ϲݻ����� ȣ��" << endl;
	int len = strlen(Name) + 1;		// �������� ����
	sName = new char[len];			// ��������
	strcpy(sName, Name);
}

Student::Student(const Student& rhs)
	:nHakbun(rhs.nHakbun)
{
	cout << "Student ��������� ȣ��" << endl;
	int len = strlen(rhs.sName) + 1;	// �������� ����
	sName = new char[len];				// ��������
	strcpy(sName, rhs.sName);
}

Student::~Student()
{
	delete []sName;
	cout << "Student �Ҹ��� ȣ��" << endl;
}

void Student::show(void)
{
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;
}

Student& Student::operator=(const Student& rhs)
{
	cout << "���Կ����� ȣ��" << endl;

	// ������ �����ϴ� ������ �����ϰ� �� ���� �Ҵ��غ�
	delete[]sName;
	nHakbun = rhs.nHakbun;
	int len = strlen(rhs.sName) + 1;	// �������� ����
	sName = new char[len];				// ��������
	strcpy(sName, rhs.sName);

	return *this;
}