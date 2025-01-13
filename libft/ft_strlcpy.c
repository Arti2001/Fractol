/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:36:02 by amysiv            #+#    #+#             */
/*   Updated: 2023/11/01 16:17:25 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	if (size > 0)
	{
		while (*(src + len) && ((size - 1) > len))
			*dest++ = (*(src + len++));
		*dest = '\0';
	}
	while (*(src + len))
		len++;
	return (len);
}

//int main()
//{
//	char dest[20] = "12";
//	char src[20] = "aaa";
//	printf("MY_len: %ld\ndest: %s\n", ft_strlcpy(dest, src, 3), dest);
//	printf("Original_len: %ld\ndest: %s\n", strlcpy(dest, src, 3), dest);
//}