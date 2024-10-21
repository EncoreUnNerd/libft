/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:09:06 by mhenin            #+#    #+#             */
/*   Updated: 2024/10/15 11:09:07 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int l)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)l)
			return ((char *)&str[i]);
		i++;
	}
	if ((char)l == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
