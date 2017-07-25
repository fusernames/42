/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 14:28:39 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/25 13:22:45 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int i;
	int *ret;

	i = 0;
	ret = malloc(sizeof(int) * lenght);
	while (i < lenght)
	{
		ret[i] = f(tab[i]);
		i++;
	}
	return (ret);
}
