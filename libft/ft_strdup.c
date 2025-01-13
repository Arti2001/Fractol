/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:20:02 by amysiv            #+#    #+#             */
/*   Updated: 2023/10/30 19:14:24 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	char	*str;

	ptr = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	str = ptr;
	while (*s)
		*ptr++ = *s++;
	*ptr = '\0';
	return (str);
}

// int main()
//{
//	char *str2;

//	char *str = "hello world";
//	str2 = ft_strdup(str);
//	printf("%s", ft_strdup(str));

//	return 0;
//}