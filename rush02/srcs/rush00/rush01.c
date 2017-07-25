/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:55:42 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/08 16:03:39 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_line(char char1, char char2, char char3, int x)
{
	int i;

	ft_putchar(char1);
	i = 0;
	while (x - 2 > i)
	{
		ft_putchar(char2);
		i++;
	}
	if (x > 1)
	{
		ft_putchar(char3);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	if (y > 0)
	{
		ft_print_line('/', '*', '\\', x);
	}
	if (y > 2)
	{
		i = 0;
		while (y - 2 > i)
		{
			ft_print_line('*', ' ', '*', x);
			i++;
		}
	}
	if (y > 1)
	{
		ft_print_line('\\', '*', '/', x);
	}
}
