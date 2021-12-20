/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngardzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:36:58 by ngardzie          #+#    #+#             */
/*   Updated: 2021/12/09 09:27:20 by ngardzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	c;
	int		i;

	c = 0;
	i = 0;
	while (src[i] != '\0' && c < len)
	{
		dst[i] = src[i];
		i++;
		c++;
	}
	while (c < len)
	{
		dst[i] = '\0';
		i++;
		c++;
	}
	return (dst);
}
