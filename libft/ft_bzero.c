/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:52:55 by amysiv            #+#    #+#             */
/*   Updated: 2023/10/30 15:26:29 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*var;

	var = (unsigned char *)s;
	while (n--)
	{
		*var++ = '\0';
	}
}

// int main()
//{
//	char str[20] = "Hello";
//	ft_bzero(str, 3);

//	printf("%c", str[3]);
//}