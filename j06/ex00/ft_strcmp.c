/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 11:37:10 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/13 14:30:37 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int result;

	result = 0;
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s1[i] != '\0')
	{
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}
