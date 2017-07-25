/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 11:01:55 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/23 15:49:08 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "rush.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while(*s)
	{
		ft_putchar(*s);
		s++;
	}
}

void	print_rush(int nb_rush, int x, int y)
{
	ft_putstr("[colle - 0");
	ft_putchar(nb_rush + '0');
	ft_putstr("] [");
	ft_putchar(x + '0');
	ft_putstr("] [");
	ft_putchar(y + '0');
	ft_putchar(']');
}

void	find_rush(char *s)
{
	int			(*is_rush[5])(char*, int, int);
	int			i;
	int			x;
	int			y;

	x = check_x(s);
	y = check_y(s);
	is_rush[0] = is_rush00;
	is_rush[1] = is_rush01;
	is_rush[2] = is_rush02;
	is_rush[3] = is_rush03;
	is_rush[4] = is_rush04;
	i = 0;
	while(i < 5)
	{
		if (is_rush[i](s, x, y))
			print_rush(i, x, y);
		i++;
	}
}

int		main(void)
{
	char	buf[250];
	int		end;

	end = read(0, buf, 249);
	buf[end] = '\0';
	find_rush(buf);
	return (0);
}
