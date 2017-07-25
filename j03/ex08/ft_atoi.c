/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:29:25 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/12 13:37:02 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_whitespace(char c)
{
	int		i;
	char	whitespaces[8];

	whitespaces[0] = ' ';
	whitespaces[1] = '\n';
	whitespaces[2] = '\t';
	whitespaces[3] = '\r';
	whitespaces[4] = '\f';
	whitespaces[5] = '\r';
	whitespaces[6] = '\v';
	whitespaces[7] = '\12';
	i = 0;
	while (i < 8)
	{
		if (c == whitespaces[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_is_op(char c, char nextc, int *is_negative, int nb_started)
{
	if ((c == '+' || c == '-') && nb_started == 0)
	{
		if (nextc >= '0' && nextc <= '9')
		{
			if (c == '-')
				*is_negative = 1;
			return (1);
		}
	}
	return (0);
}

int		ft_is_nbr(char c, char nextc, int *nb_started)
{
	if (c >= '0' && c <= '9')
	{
		if (c == '0' && *nb_started == 0)
		{
			if (nextc >= '1' && nextc <= '9')
				;
			else
				*nb_started = 1;
			return (1);
		}
		if (*nb_started == 0)
		{
			*nb_started = 1;
		}
		return (1);
	}
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int result;
	int nb_started;
	int is_negative;

	nb_started = 0;
	is_negative = 0;
	result = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_nbr(str[i], str[i + 1], &nb_started) == 1)
			result = (result * 10) + (str[i] - '0');
		else if (ft_is_whitespace(str[i]) == 1 && nb_started == 0)
			;
		else if (ft_is_op(str[i], str[i + 1], &is_negative, nb_started) == 1
				&& nb_started == 0)
			;
		else
			break ;
		i++;
	}
	if (is_negative == 1)
		result = -result;
	return (result);
}
