/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 22:14:08 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/20 12:17:09 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int size;

	i = 0;
	size = ft_strlen(dest);
	while (src[i])
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		size;
	char	*str;
	int		i;

	size = 0;
	i = 1;
	while (i < argc)
	{
		size = size + ft_strlen(argv[i]);
		i++;
	}
	str = (char *)malloc(sizeof(*str) * size);
	str[0] = '\0';
	i = 1;
	while (i < argc)
	{
		ft_strcat(str, argv[i]);
		if (i < argc - 1 && argv[i + 1][0] != '\0')
			ft_strcat(str, "\n");
		i++;
	}
	return (str);
}
