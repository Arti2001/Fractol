/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:23:28 by amysiv            #+#    #+#             */
/*   Updated: 2023/11/01 16:14:46 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	i = 0;
	while (n > i)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		i++;
		s1++;
		s2++;
	}
	return (0);
}

// int main()
//{
//	char str1[] = "abc";
//	char str2[] = "abc";
//	printf("My output is           : %d\n", ft_memcmp(str1, str2, 7));
//	printf("The original output is : %d", memcmp(str1, str2, 7));
// }