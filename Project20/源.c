#include <stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int (*p)(int, int) = Add;
	int sum = (*p)(1, 2);
	printf("%d\n", sum);
	return 0;
}
