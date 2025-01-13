/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:35:59 by amysiv            #+#    #+#             */
/*   Updated: 2023/11/01 16:19:49 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int value, size_t n)
{
	unsigned char	*s;
	size_t			i;
	unsigned char	c;

	i = 0;
	s = (unsigned char *)str;
	c = (unsigned char)value;
	while (n > i)
	{
		if (s[i] == c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}

// int main()
//{

//	char str[] = " world";
//	printf("my       :%s\n", (char *)ft_memchr(str, 'r', 5));
//	printf("original :%s", (char *)memchr(str, 'r', 5));
//}