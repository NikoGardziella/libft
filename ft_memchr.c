/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngardzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:53:44 by ngardzie          #+#    #+#             */
/*   Updated: 2021/12/09 09:25:53 by ngardzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	ch;

	i = 0;
	ch = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)ch)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
