#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[] = "une grande phrase pour tes tostx";
	char str2[] = "tes ";
	char str3[] = "une grande phrase pour tes tostx";
	char str4[] = "tes ";
	printf("%s\n", ft_strstr(str, str2));
	printf("%s\n", strstr(str3, str4));
	return (0);
}
