/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 21:08:52 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/25 11:44:50 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calculator.h"
#include "ft.h"
#include "ft_opp.h"
#include <stdio.h>

int		ft_usage(int a, int b)
{
	a = 0;
	b = 0;
	ft_putstr("error : only [ + - * / % ] are accepted.\n");
	return (0);
}

void	ft_stop(char op)
{
	if (op == '/')
		ft_putstr("Stop : division by zero\n");
	else if (op == '%')
		ft_putstr("Stop : modulo by zero\n");
}

int		ft_calculate(char *op, int a, int b)
{
	int		i;
	int		result;

	i = 0;
	if ((ft_strcmp(op, "%") == 0 || ft_strcmp(op, "/") == 0) && b == 0)
	{
		ft_stop(*op);
		return (0);
	}
	while (g_opptab[i].op)
	{
		if (ft_strcmp(op, g_opptab[i].op) == 0)
		{
			ft_putnbr(g_opptab[i].fun(a, b));
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
	g_opptab[i - 1].fun(a, b);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		ft_calculate(argv[2], ft_atoi(argv[1]), ft_atoi(argv[3]));
	}
	return (0);
}
