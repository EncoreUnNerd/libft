/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:38:11 by mhenin            #+#    #+#             */
/*   Updated: 2024/10/16 11:38:12 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char l, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (l == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		start;
	int		end;

	start = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen((char *)s1) - 1;
	while (is_in_set(s1[start], (char *)set))
		start++;
	while (is_in_set(s1[end], (char *)set) && end > start)
		end--;
	result = (char *)malloc((end - start + 2) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (start <= end)
	{
		result[i] = s1[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}
