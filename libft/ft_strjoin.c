/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:26:16 by amysiv            #+#    #+#             */
/*   Updated: 2023/11/01 16:17:07 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat;
	size_t	len;

	if (!s1 && !s2)
		return (ft_strdup(concat));
	len = ft_strlen(s1) + ft_strlen(s2);
	concat = malloc((len +1) * sizeof(char));
	if (!concat)
		return (NULL);
	ft_strlcpy(concat, s1, ft_strlen(s1) + 1);
	ft_strlcat(concat, s2, len +1);
	return ((char *)concat);
}

// int main()
//{
//	char str1[] = "my favorite animal is";
//	char str2[] = " ";
//	char str3[] = "the nyancat";
//	printf("%s", ft_strjoin(ft_strjoin(str1, str2),str3));
// }