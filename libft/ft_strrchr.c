/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:41:49 by amysiv            #+#    #+#             */
/*   Updated: 2023/11/01 16:18:59 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, char c)

{
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	i = 0;
	while (s[len - i] != c && s[i])
		i++;
	if (s[len - i] == c)
		return ((char *)(s + len - i));
	else
		return (NULL);
}

//	char str[]="ojiakirp";
//	printf("%s", ft_strrchr(str, 'o'));
// int main()
//{
//	char str[10] = "Hello";
//	printf("%s", ft_strmapi(str, ft_strrchr));

//}