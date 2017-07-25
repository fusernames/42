#include <stdio.h>

int		match(char *s1, char *s2);

int		main(void)
{
	printf("%d", match("main.c", "*.c"));
	return (0);
}
