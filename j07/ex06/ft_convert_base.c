/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 15:24:37 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/21 15:32:17 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}


char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		int_from;
	int		int_to;
	char	*res;

	int_from = strlent(base_from);
	int_to = strlent(base_to);

	if (int_from != 10)
	{
		
	}
}
