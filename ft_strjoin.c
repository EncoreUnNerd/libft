/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:39:24 by mhenin            #+#    #+#             */
/*   Updated: 2024/08/06 14:04:50 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src, int ouais)
{
	int	i;
	int	dest_len;

	dest_len = 0;
	if (ouais != 0)
	{
		while (dest[dest_len])
		{
			++dest_len;
		}
	}
	i = 0;
	while (src[i])
	{
		dest[dest_len] = src[i];
		++i;
		++dest_len;
	}
	dest[dest_len] = '\0';
	return (dest);
}

int	total_len(char **strs, int size)
{
	int	i;
	int	j;
	int	ttl_len;

	i = 0;
	ttl_len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			ttl_len++;
			j++;
		}
		i++;
	}
	return (ttl_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		ttl_len;
	int		sep_len;

	ttl_len = total_len(strs, size);
	sep_len = 0;
	while (sep[sep_len])
		sep_len++;
	res = malloc(sizeof(char) * (ttl_len + (sep_len * (size) - 1)));
	if (ttl_len == 0 || size < 1)
	{
		res = malloc(sizeof(char));
		res[0] = '\0';
		return (res);
	}
	i = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i], i);
		if (i < size - 1)
			ft_strcat(res, sep, 1);
		i++;
	}
	return (res);
}
