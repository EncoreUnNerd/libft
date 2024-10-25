/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 08:10:08 by mhenin            #+#    #+#             */
/*   Updated: 2024/10/15 08:10:09 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*s;

	if ((!dest && !src) || n == 0)
		return (dest);
	s = (const unsigned char *)src;
	i = 0;
	if ((unsigned char *)dest < s)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			((unsigned char *)dest)[n] = s[n];
	}
	return (dest);
}
