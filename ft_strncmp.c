/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <mhenin@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:26:14 by mhenin            #+#    #+#             */
/*   Updated: 2024/10/15 09:26:15 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		++i;
	}
	return (0);
}
// int main() {
//     char *str1[] = {"abc", "Hello, World!", "Goodbye", "Test", "12345"};
//     char *str2[] = {"abcd", "Hello, World!", "Goodbye!", "Test123", "1234"};
//     size_t sizes[] = {5, 13, 7, 4, 5}; // Tailles à comparer
//     int num_tests = sizeof(sizes) / sizeof(sizes[0]);

//     for (int i = 0; i < num_tests; i++) {
//         int result_standard = strncmp(str1[i], str2[i], sizes[i]);
//         int result_custom = ft_strncmp(str1[i], str2[i], sizes[i]);

//         printf("Test %d:\n", i + 1);
//         printf("\"%s\" || \"%s\" -> %zu\n", str1[i], str2[i], sizes[i]);
//         printf("strncmp result: %d\n", result_standard);
//         printf("ft_strncmp result: %d\n", result_custom);
//         printf(result_standard == result_custom ? "ok\n\n" : "pas ok\n\n");
//     }

//     return 0;
// }
