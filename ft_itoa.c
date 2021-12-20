/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngardzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:41:30 by ngardzie          #+#    #+#             */
/*   Updated: 2021/12/10 14:07:21 by ngardzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_put_array(char *new, int n, long int len)
{
	if (n == -2147483648)
	{
		new[0] = '-';
		new[1] = '2';
		n = 147483648;
	}
	if (n < 0)
	{
		new[0] = '-';
		n = n * -1;
	}
	if (n == 0)
	{
		new[0] = '0';
	}
	while (n > 0)
	{
		new[len - 1] = 48 + (n % 10);
		n = n / 10;
		len--;
	}
	return (new);
}

char	*ft_itoa(int n)
{
	char		*new;
	long int	len;

	len = ft_intlen(n);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	new = ft_put_array(new, n, len);
	new[len] = '\0';
	return (new);
}
