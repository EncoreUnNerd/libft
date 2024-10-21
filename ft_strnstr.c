/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:13:31 by mhenin            #+#    #+#             */
/*   Updated: 2024/10/15 10:13:33 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < n)
	{
		j = 0;
		while ((big[i + j] == little[j]) && (i + j < n))
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	ft_strnstr("j'aime les test", "te", 5);
// }
