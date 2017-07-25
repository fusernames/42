/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 12:30:14 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/16 19:30:53 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	int		i;
	int		j;
	int		k;
	int		word;
	char	to_find[99];

	word = 0;
	i = 0;
	k = 0;
	while (s2[i])
	{
		j = 0;
		while (s2[i] != '*' && s2[i])
		{
			word = 1; 
			to_find[j] = s2[i];
			if (s2[i + 1] == '*')
				to_find[j + 1] = '\0';
			if (s2[i + 1] == '\0')
			{
				to_find[j + 1] = '\0';
				word = 2;
			}
			i++;
			j++;
		}
		j = 0;
		if (word > 0)
		{
			while (s1[k] != to_find[0] && s1[k])
				k++;
			while (to_find[j])
			{
				if (to_find[j] != s1[k])
					return (0);
				if (word > 1)
					if (s1[k + 1] == '\0' && to_find[j + 1] == '\0')
						return (1);
				k++;
				j++;
			}
		}
		i++;
	}
	return (1);
}
