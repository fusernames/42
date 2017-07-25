#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				main(void)
{
	char	str[6] = "srcee";
	char	str2[5] = "ah";

	printf("%lu\n", strlcpy(str2, str, 5));
	printf("%s\n\n", str2);
	
	char	str3[6] = "srcee";
	char	str4[5] = "ah";

	printf("%u\n", ft_strlcpy(str4, str3, 5));
	printf("%s\n", str4);
	return (0);
}
