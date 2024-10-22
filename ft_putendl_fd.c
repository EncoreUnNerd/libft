/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:21:16 by mhenin            #+#    #+#             */
/*   Updated: 2024/10/17 10:23:48 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	end;

	i = 0;
	end = '\n';
	if (!s)
		return ;
	while (s[i])
		i++;
	write(fd, s, i * sizeof(char));
	write(fd, &end, sizeof(char));
}
