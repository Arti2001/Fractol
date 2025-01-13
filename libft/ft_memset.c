/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:11:04 by amysiv            #+#    #+#             */
/*   Updated: 2023/10/30 15:48:35 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int value, int n)
{
	unsigned char	*var;
	int				i;

	var = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		var[i] = value;
		i++;
	}
	return (str);
}
// int main(){

// char str2[15];
// ft_memset(str2, 't', 5);
// printf("%s", str2);

//}