#include <iostream> // cout, endl 객체를 가지고 있음
#include <string>	// string 클래스를 가지고 있음

#include <stdio.h>	// printf()를 가지고 있음
#include <string.h> // strcpy(), strcat()를 가지고 있음

// std:: 안써도 된다
using namespace std;

int main(void)
{
	char cMunja[20];
	strcpy(cMunja, "c_insert");	// c_insert
	strcat(cMunja, "++");		// c_insert++
	printf("%s \n", cMunja);

	std::string cppMunja;
	cppMunja = "cpp_insert";	// cpp_insert
	cppMunja = cppMunja + "++";	// cpp_insert++
	cout << cppMunja << endl;

	return 0;
}