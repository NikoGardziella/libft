/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngardzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:18:03 by ngardzie          #+#    #+#             */
/*   Updated: 2021/12/11 14:07:53 by ngardzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**new;
	size_t	i;
	size_t	k;
	size_t	j;

	i = 0;
	k = 0;
	new = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (new == NULL)
		return (NULL);
	while (i < ft_word_count(s, c))
	{
		j = 0;
		while (s[k] == c)
			k++;
		new[i] = (char *)malloc(sizeof(*new) * (ft_word_size(&(s[k]), c) + 1));
		if (new[i] == NULL)
			return (NULL);
		while (s[k] != c && s[k] != '\0')
			new[i][j++] = s[k++];
		new[i][j] = '\0';
		i++;
	}
	new[i] = 0;
	return (new);
}
