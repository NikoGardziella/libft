/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngardzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 08:40:36 by ngardzie          #+#    #+#             */
/*   Updated: 2021/12/09 09:25:08 by ngardzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	unsigned char		*src;

	i = 0;
	if (str1 == NULL && str2 == NULL)
		return (NULL);
	src = (unsigned char *)str2;
	dst = (unsigned char *)str1;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
