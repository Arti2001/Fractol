/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:38:45 by amysiv            #+#    #+#             */
/*   Updated: 2023/11/01 16:17:17 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	i;

	i = 0;
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (size <= d)
		return (s + size);
	if (size > i)
	{
		while (*(src + i) && i < (size - d - 1))
		{
			dst[d + i] = src[i];
			i++;
		}
	}
	dst[d + i] = '\0';
	return (d + s);
}
// int main()
//{
//	char src[20]="World";
//	char dest[20]="Hello";
//	char srcorig[20]="World";
//	char destorig[20]="Hello";
//printf("length : %zu\nconcatenation : %s\n", ft_strlcat(dest, src, 4), dest);
//}
