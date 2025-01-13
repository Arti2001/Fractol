/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:21:52 by amysiv            #+#    #+#             */
/*   Updated: 2023/11/01 16:13:05 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	sign = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-')
		sign *= -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	num = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		num = 10 * num + (*nptr - '0');
		nptr++;
	}
	return (num * sign);
}

// int main()
//{
//	printf("my output is           : %d\n", ft_atoi("      		  ++345"));
//	printf("the original output is : %d", atoi("     		  ++12345"));
// }s