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

// int	check_if_in(char l, char *charset)
// {
// 	int	i;

// 	i = 0;
// 	while (charset[i])
// 	{
// 		if (charset[i] == l)
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

void	opti(int res[2], int splits, int chars, int c)
{
	if (c == 1)
		splits--;
	res[0] = splits + 2;
	res[1] = chars;
}

void	know_size(const char *str, char c, int res[2])
{
	int	i;
	int	splits;
	int	chars;
	int	l;

	i = 0;
	l = 1;
	splits = 0;
	chars = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			if (l != 1)
				splits++;
			l = 1;
		}
		else
		{
			chars++;
			l = 0;
		}
		i++;
	}
	opti(res, splits, chars, l);
}

void	asign(char *str, char c, char **res)
{
	int	i;
	int	w;
	int	l;

	i = 0;
	w = 0;
	l = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			if (l != 0)
			{
				res[w][l] = '\0';
				w++;
			}
			l = 0;
		}
		else
		{
			res[w][l] = str[i];
			l++;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len[2];
	char	**res;

	know_size(s, c, len);
	res = (char **)malloc(len[0] * sizeof(char *));
	i = 0;
	while (i < len[0])
	{
		res[i] = (char *)malloc((len[1] + 1) * sizeof(char));
		i++;
	}
	res[len[0] - 1] = 0;
	asign((char *)s, c, res);
	return (res);
}
