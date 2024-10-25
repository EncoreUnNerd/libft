/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:27:37 by mhenin            #+#    #+#             */
/*   Updated: 2024/10/14 17:27:39 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*res;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	res = (char *)malloc(src_len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < src_len + 1)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
