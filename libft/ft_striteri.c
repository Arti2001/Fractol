/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:48:55 by amysiv            #+#    #+#             */
/*   Updated: 2023/11/01 16:16:56 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (ft_strlen(s) > i)
	{
		f(i, &s[i]);
		i++;
	}
}
//int main()
//{
//	char str[] = "ab";
//	printf("%s \n", str);
//	ft_striteri(str, &test);
//	printf("%s", str);
//}
