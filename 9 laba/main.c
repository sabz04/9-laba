#include <time.h>
#include <malloc.h>
#include <string.h>

//1.4,2.4
int func_1_4(int x) {
	return 5 * x * 32;
}
int main()
{
	int m = func_1_4(20);
	printf("%d", m);
	return 0;
}