/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 18:23:40 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/23 21:36:27 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int new_word;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '-' || str[i] == '+')
			new_word = 1;
		else if (str[i] >= 'a' && str[i] <= 'z' && new_word == 1)
		{
			str[i] -= ' ';
			new_word = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' && new_word == 0)
			str[i] += ' ';
		else
			new_word = 0;
		i++;
	}
	return (str);
}
