/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:27:37 by mhenin            #+#    #+#             */
/*   Updated: 2024/10/16 20:21:09 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	int		s_len;
	char	*res;

	i = start;
	j = 0;
	s_len = 0;
	while (s[s_len])
		s_len++;
	if (len == 0 || start >= s_len)
		res = malloc(1 * sizeof(char));
	else if (len > s_len || start + len > s_len)
		res = malloc((s_len - start + 1) * sizeof(char));
	else
		res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (s[i] != '\0' && j < len)
	{
		res[j] = s[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}
