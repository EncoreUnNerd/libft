/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:53:34 by mhenin            #+#    #+#             */
/*   Updated: 2024/10/14 17:53:39 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int l)
{
	if (l >= 'A' && l <= 'Z')
	{
		l = l + 32;
	}
	return (l);
}
// int	main()
// {
// 	printf("%c", ft_tolower('H'));
// }
