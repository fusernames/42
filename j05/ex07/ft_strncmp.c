/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 17:12:57 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/23 21:32:44 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				result;

	n--;
	result = 0;
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s1[i] != '\0' && i < n)
	{
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}
