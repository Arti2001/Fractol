/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:59:47 by amysiv            #+#    #+#             */
/*   Updated: 2023/11/01 16:17:51 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *)big);
	i = 0;
	j = 0;
	while (big[j] && n > j)
	{
		i = 0;
		while (big[j + i] == little[i] && (n - j) > i)
		{
			if (little[i + 1] == '\0' )
				return ((char *)big + j);
			i++;
		}
		j++;
	}
	return (NULL);
}
//int main()
//{

//	char str[] = "";
//	printf("My                  :%s\n", ft_strnstr(str, "", -1));
//	printf("The original output :%s", strnstr(str, "", -1));
//	return 0;
//}