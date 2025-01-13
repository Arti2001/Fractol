/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:20:36 by amysiv            #+#    #+#             */
/*   Updated: 2023/11/01 16:18:06 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*substr;
	size_t			i;
	size_t			j;

	j = 0;
	i = start;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	while (s[i] != '\0' && len > j)
	{
		j++;
		i++;
	}
	substr = malloc((j + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] != '\0' && len > j)
		substr[j++] = s[i++];
	substr[j] = '\0';
	return ((char *)substr);
}
// int main()

//{
//	char str[] = "0123456789ABCD";
//	char *ret = ft_substr(str, 10, 5);
//	printf("%s", ret);
//	free(ret);

//}