/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:17:54 by mhenin            #+#    #+#             */
/*   Updated: 2024/10/15 11:17:54 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int l)
{
	int		i;
	char	*last;

	last = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)l)
			last = (char *)&str[i];
		i++;
	}
	if ((char)l == '\0')
		last = (char *)&str[i];
	return (last);
}
