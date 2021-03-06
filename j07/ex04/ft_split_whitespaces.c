/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 13:39:13 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/20 13:31:49 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t' || c == '\0');
}

int		nb_words(char *str)
{
	int i;
	int words;

	words = 0;
	i = 0;
	if (is_space(str[i]) == 0)
		words++;
	while (str[i])
	{
		if (is_space(str[i]) && is_space(str[i + 1]) == 0)
			words++;
		i++;
	}
	return (words);
}

char	*create_word(char *str)
{
	int		i;
	char	*word;

	i = 0;
	while (is_space(str[i]) == 0)
		i++;
	word = malloc(sizeof(*word) * i + 1);
	i = 0;
	while (is_space(str[i]) == 0)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	char	**strings;

	j = nb_words(str);
	strings = malloc(sizeof(*strings) * j + 1);
	strings[j] = NULL;
	i = 0;
	j = 0;
	if (is_space(str[0]) == 0)
	{
		strings[j++] = create_word(str);
		i++;
	}
	while (j < nb_words(str))
	{
		while (str[i])
		{
			if (is_space(str[i - 1]) && is_space(str[i]) == 0)
				strings[j++] = create_word(&str[i]);
			i++;
		}
	}
	return (strings);
}
