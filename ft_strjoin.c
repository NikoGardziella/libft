/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngardzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 08:30:53 by ngardzie          #+#    #+#             */
/*   Updated: 2021/12/09 14:23:00 by ngardzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		s1len;
	int		s2len;
	char	*new;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	i = 0;
	new = (char *)malloc(sizeof(char) * (s1len + s2len + 1));
	if (new == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		new[s1len] = s2[i];
		s1len++;
		i++;
	}
	new[s1len] = '\0';
	return (new);
}
