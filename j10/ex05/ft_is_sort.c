/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 17:14:21 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/26 10:02:17 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int	i;
	int sort;

	i = 0;
	sort1 = 1;
	sort2 = 1;
	while (i < lenght - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			sort1 = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			sort2 = 0;
		i++;
	}
	return (sort1 || sort2);
}
