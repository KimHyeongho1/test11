#include <stdio.h>
#include <time.h>

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

	return 0;
}