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

void	*ft_calloc(size_t num, size_t size)
{
	void	*res;
	size_t	i;

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
