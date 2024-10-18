/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 13:32:04 by mhenin            #+#    #+#             */
/*   Updated: 2024/07/31 18:15:51 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	how_many(char const *s, char c)
{
	int	i;
	int	l;
	int	res;

	i = 0;
	l = 0;
	res = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			l = 0;
		}
		else
		{
			if (l == 0)
				res++;
			l = 1;
		}
		i++;
	}
	return (res);
}

void	attribute(char **res, int index, char const *s, int *cursors)
{
	int	i;

	i = 0;
	res[index] = (char *)malloc((cursors[1] - cursors[0] + 1) * sizeof(char));
	while (cursors[0] + i < cursors[1])
	{
		res[index][i] = s[cursors[0] + i];
		i++;
	}
	cursors[0] += i;
	res[index][i] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		l;
	int		index;
	int		cursors[2];

	i = 0;
	l = 0;
	index = 0;
	cursors[0] = 0;
	cursors[1] = 0;
	if (s == NULL)
		return (NULL);
	res = (char **)malloc((how_many(s, c) + 1) * sizeof(char *));
	if (!res)
		return NULL;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (l == 1)
			{
				attribute(res, index, s, cursors);
				if (!res[index])
					return (NULL);
				index++;
			}
			cursors[0]++;
			cursors[1]++;
			l = 0;
		}
		else
		{
			cursors[1]++;
			l = 1;
		}
		i++;
	}
	if (l == 1)
		attribute(res, index, s, cursors);
	res[how_many(s, c)] = NULL;
	return (res);
}

// int main()
// {
// 	char **res = ft_split("pipi,caca", ',');
// }
