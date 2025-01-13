/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:45:11 by amysiv            #+#    #+#             */
/*   Updated: 2023/10/30 15:48:06 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *des, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)des;
	s = (unsigned char *)src;
	if ((!d) && (!s))
		return (NULL);
	if (s < d)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (des);
}
// int main()
//{
//	char str[20]="MotherFuther";
//	char str2[20]="MotherFuther";
// ft_memmove(str , str+6, 6);
// memmove(str2 , str2+6, 6);
// printf("my 		%s \n", str);
// printf("original	%s", str2);

//}