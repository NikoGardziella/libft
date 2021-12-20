/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngardzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:22:04 by ngardzie          #+#    #+#             */
/*   Updated: 2021/12/11 13:58:42 by ngardzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_check_start(char const *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		else if (s[i] != ' ' || s[i] != '\n' || s[i] != '\t')
			return (i);
	}
	return (i);
}

static size_t	ft_check_end(char const *s, size_t start)
{	
	size_t	len;
	int		i;

	len = 0;
	i = ft_strlen(s) - 1;
	if (start == ft_strlen(s))
		return (0);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i--;
		len++;
	}
	return (len);
}

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	int		i;
	char	*str;
	size_t	len;

	start = ft_check_start(s);
	end = ft_check_end(s, start);
	len = ft_strlen(s) - end - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (len != 0)
	{
		str[i] = s[start];
		i++;
		start++;
		len--;
	}
	str[i] = '\0';
	return (str);
}
