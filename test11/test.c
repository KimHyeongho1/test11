#include <stdio.h>
#include <time.h>
//10초가 되면 키를 입력해서 10초를 맞추는 프로그램입니다.
int main(void)
{
	time_t start, end;
	start = time(NULL);
	printf("10초가 되면 아무키 입력\n");

	while (1)
	{
		if (getchar())
			break;
	}
	end = time(NULL);
	printf("경과된 시간은 %ld초 입니다.", end - start);
	//10초면 성공
	

	return 0;
}
