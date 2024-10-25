/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 06:53:52 by mhenin            #+#    #+#             */
/*   Updated: 2024/10/15 06:53:58 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	void	*res;
	size_t	i;
	size_t	r;

	if (size == 0)
		return (malloc(0));
	r = num * size;
	if (r / size != num)
		return (NULL);
	res = malloc(num * size);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < num * size)
	{
		((char *)res)[i] = 0;
		i++;
	}
	return (res);
}
