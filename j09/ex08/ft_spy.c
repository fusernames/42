/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 12:36:28 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/14 14:05:22 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_spy(char *str, char *to_find)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (to_find[j] != '\0')
	{
		if (str[i] == to_find[j] || str[i] == to_find[j] - 32)
		{
			i++;
			j++;
		}
		else
			return (0);
	}
	return (1);
}

int		main(int argc, char *argv[])
{
	int i;
	int alert;

	i = 1;
	alert = 0;
	while (i < argc)
	{
		alert = ft_spy(argv[i], "president");
		if (alert == 0)
			alert = ft_spy(argv[i], "attack");
		if (alert == 0)
			alert = ft_spy(argv[i], "powers");
		if (alert == 1)
		{
			write(1, "Alert!!!\n", 10);
			return (0);
		}
		i++;
	}
	return (0);
}
