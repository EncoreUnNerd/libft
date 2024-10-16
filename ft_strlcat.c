/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:01:51 by mhenin            #+#    #+#             */
/*   Updated: 2024/10/15 12:01:52 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	dst_l;
	unsigned int	src_l;

	i = 0;
	dst_l = 0;
	src_l = 0;
	while (dst[dst_l])
		dst_l++;
	while (src[src_l])
		src_l++;
	if (size == 0)
		return (src_l);
	if (dst_l >= size)
		return (size + src_l);
	while ((dst_l + i < size - 1) && src[i] != '\0')
	{
		dst[dst_l + i] = src[i];
		i++;
	}
	dst[dst_l + i] = '\0';
	return (dst_l + src_l);
}
