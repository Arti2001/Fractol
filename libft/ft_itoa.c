/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:41:16 by amysiv            #+#    #+#             */
/*   Updated: 2023/10/30 20:38:12 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	int	ft_intlen(long int value)
{
	long int	l;
	int			sign;

	sign = 1;
	if (value < 0)
		sign = sign * value;
	l = !value;
	while (value)
	{
		l++;
		value /= 10;
	}
	if (sign < 0)
		return (l + 1);
	else
		return (l);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			value;
	int			i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_intlen(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	value = n;
	if (n < 0)
		value = -n;
	while (i >= 0)
	{
		str[i] = value % 10 + '0';
		value /= 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	return ((char *)(str));
}

// int main()
//{
//	int i;
//	i = 0;
//	printf("%s", ft_itoa(i));
// }