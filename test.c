#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[] = "abcd\\1233";

	printf("%s %d %d", a, sizeof(a), strlen(a));
	return 0;
}
