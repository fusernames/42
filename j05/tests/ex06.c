#include <stdio.h>
#include <string.h>

char	ft_strcmp(char *s1, char *s2);

int		main(void)
{
	//char strr[] = "balek";
	char str[] = " e3289eu32 sab";
	char str2[] = " sab ";
	printf("%d\n", strcmp(str, str2));
	printf("%d\n", ft_strcmp(str, str2));
	//strr[0] = 'a';
	return (0);
}
