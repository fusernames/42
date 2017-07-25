#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int				main(void)
{
	char	str[10] = "src";
	char	str2[20] = "dest > ";

	printf("%lu\n", strlcat(str2, str, 0));
	printf("%s\n\n", str2);
	
	char	str3[10] = "src";
	char	str4[20] = "dest > ";

	printf("%u\n", ft_strlcat(str4, str3, 0));
	printf("%s\n", str4);
	return (0);
}
