#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	// a는 1로 증가한 직후에 if문이 참으로 처리
	// b와 c는 증가하지 않음
	if (++a || ++b && ++c)
		printf("참 ");
	
	printf("%d %d %d \n", a, b, c);
	
	return 0;
}

