// cout, endl ��ü�� ������ ����
#include <iostream>
// std:: �Ƚᵵ �ȴ�
using namespace std;

// pre�����Ϸ��� ó��(�ڵ带 ġȯ����)
// �ڷ����� ������� ����
// ����� ����
//#define jegob(A)	((A) * (A))


// ���� �Լ��� ȣ����� ����
// �����Ϸ��� ó��(�ڵ带 ġȯ����)
// �ڷ����� �������
// ������� ������
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