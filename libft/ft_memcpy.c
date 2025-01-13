/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 12:42:38 by amysiv            #+#    #+#             */
/*   Updated: 2023/10/30 15:46:41 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	const char		*s;

	d = dest;
	s = src;
	i = 0;
	if ((!d) && (!s))
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

//int    main(void)
//{
//    char    dest[20] = "hello";
//	char    src[20] = "j";
//	ft_memcpy(dest +0, src, 7);
//	printf("%s\n", dest);
//	memcpy(dest +0, src, 7);
//    printf("%s", dest);

//}
