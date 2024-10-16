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

int	check_if_in(char l, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == l)
			return (1);
		i++;
	}
	return (0);
}

void	opti(int res[2], int splits, int chars, int c)
{
	if (c == 1)
		splits--;
	res[0] = splits + 2;
	res[1] = chars;
}

void	know_size(char *str, char *charset, int res[2])
{
	int	i;
	int	splits;
	int	chars;
	int	c;

	i = 0;
	c = 1;
	splits = 0;
	chars = 0;
	while (str[i])
	{
		if (check_if_in(str[i], charset))
		{
			if (c != 1)
				splits++;
			c = 1;
		}
		else
		{
			chars++;
			c = 0;
		}
		i++;
	}
	opti(res, splits, chars, c);
}

void	asign(char *str, char *charset, char **res)
{
	int	i;
	int	w;
	int	c;

	i = 0;
	w = 0;
	c = 0;
	while (str[i])
	{
		if (check_if_in(str[i], charset))
		{
			if (c != 0)
			{
				res[w][c] = '\0';
				w++;
			}
			c = 0;
		}
		else
		{
			res[w][c] = str[i];
			c++;
		}
		i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		len[2];
	char	**res;

	know_size(str, charset, len);
	res = (char **)malloc(len[0] * sizeof(char *));
	i = 0;
	while (i < len[0])
	{
		res[i] = (char *)malloc((len[1] + 1) * sizeof(char));
		i++;
	}
	res[len[0] - 1] = 0;
	asign(str, charset, res);
	return (res);
}
