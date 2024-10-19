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

static int	get_len(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		l;
	int		s1_len;
	int		s2_len;

	i = 0;
	l = 0;
	s1_len = get_len(s1);
	s2_len = get_len(s2);
	res = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (s1[i])
		res[l++] = s1[i++];
	i = 0;
	while (s2[i])
		res[l++] = s2[i++];
	res[l] = '\0';
	return (res);
}
