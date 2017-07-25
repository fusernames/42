/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_rush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 13:58:43 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/25 11:32:44 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_y(char *s)
{
	int i;
	int res;

	res = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			res++;
		i++;
	}
	return(res);
}

int		check_x(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\n' && s[i])
		i++;
	return(i);
}

int		is_rush00(char *s)
{
	if (s[0] == 'o')
		return (1);
	return (0);
}

int		is_rush01(char *s)
{
	if (s[0] == '/')
		return (1);
	return (0);
}

int		is_rush02(char *s, int x, int y)
{
	int res;

	res = 1;
	if (s[0] != 'A')
		res = 0;
	if (x > 1)
		if (s[x - 1] != 'A')
			res = 0;
	if (y > 1)
		if (s[(x + 1) * y - (x + 1)] != 'C')
			res = 0;
	return (res);
}

int		is_rush03(char *s, int x, int y)
{
	int res;

	res = 1;
	if (s[0] != 'A')
		res = 0;
	if (x > 1)
		if (s[x - 1] != 'C')
			res = 0;
	if (y > 1)
		if (s[(x + 1) * y - (x + 1)] != 'A')
			res = 0;
	return (res);
}

int		is_rush04(char *s, int x, int y)
{
	int res;

	res = 1;
	if (s[0] != 'A')
		res = 0;
	if (x > 1)
		if (s[x - 1] != 'C')
			res = 0;
	if (y > 1)
		if (s[(x + 1) * y - (x + 1)] != 'C')
			res = 0;
	return (res);
}
