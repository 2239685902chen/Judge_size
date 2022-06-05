#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0, w = 0, e = 0;
	scanf("%d%d%d", &q, &w, &e);
	if (q >= w && q <= e)
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}
	return 0;
}