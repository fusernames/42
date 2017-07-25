#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char str[10] = "src";
	char str2[20] = "dest > ";
	printf("%s", ft_strcat(str2, str));
	return (0);
}
