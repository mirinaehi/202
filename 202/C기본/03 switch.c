#include <stdio.h>

int main(void)
{
	int x = 1;
	// 2에 break가 있어서 "12"가 출력
	switch (x)
	{
	case 0:
		printf("0");
		break;
	case 1:
		printf("1");
	case 2:
		printf("2");
		break;
	default:
		printf("d");
		break;
	}
}