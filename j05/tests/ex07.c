#include <stdio.h>
#include <string.h>

char	ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	//char strr[] = "balek";
	char str[] = "test00";
	char str2[] = "test10";
	printf("%d\n", strncmp(str, str2, 8));
	printf("%d\n", ft_strncmp(str, str2, 8));
	//strr[0] = 'a';
	return (0);
}
