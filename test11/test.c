#include <stdio.h>
#include <time.h>
//10�ʰ� �Ǹ� Ű�� �Է��ؼ� 10�ʸ� ���ߴ� ���α׷��Դϴ�.
int main(void)
{
	time_t start, end;
	start = time(NULL);
	printf("10�ʰ� �Ǹ� �ƹ�Ű �Է�\n");

	while (1)
	{
		if (getchar())
			break;
	}
	end = time(NULL);
	printf("����� �ð��� %ld�� �Դϴ�.", end - start);

	return 0;
}