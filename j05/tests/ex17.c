#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, int nb);

int		main(void)
{
	char str[10] = "src";
	char str2[20] = "dest > ";
	char str3[10] = "src";
	char str4[20] = "dest > ";
	printf("%s\n", ft_strncat(str2, str, 2));
	printf("%s\n", strncat(str4, str3, 2));
	return (0);
}
