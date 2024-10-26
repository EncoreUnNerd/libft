/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:27:37 by mhenin            #+#    #+#             */
/*   Updated: 2024/10/21 10:19:18 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*alloc(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
	{
		res = malloc(sizeof(char));
		if (!res)
			return (NULL);
		res[0] = '\0';
	}
	else if (start + len > s_len)
		res = malloc(sizeof(char) * (s_len - start + 1));
	else
		res = malloc(sizeof(char) * (len + 1));
	return (res);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	i = 0;
	res = alloc(s, start, len);
	if (!res)
		return (NULL);
	if (start > ft_strlen(s))
		return (res);
	while (i < len && s[start + i])
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
