/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:25:07 by amysiv            #+#    #+#             */
/*   Updated: 2023/11/01 16:17:34 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
// int main(void)
//{
//      char *str= "h";
//      if (str[1])
//          printf("here\n");
//      else
//          printf("nothing\n");
//      return (0);
//     printf("string length is: %zu\n", ft_strlen("hello"));
// }
