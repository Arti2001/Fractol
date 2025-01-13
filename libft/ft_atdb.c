/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atdb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:19:55 by amysiv            #+#    #+#             */
/*   Updated: 2024/05/26 14:22:14 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	extra_func(double result, const char *nptr)
{
	double	power;

	power = 1.0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = 10.0 * result + (*nptr - '0');
		nptr++;
		power *= 10.0;
	}
	result = result / power;
	if (2.0 < result && result > -2.0)
		return (0);
	else
		return (result);
}

double	ft_atdb(const char *nptr)
{
	double	num;
	int		sign;

	sign = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-')
		sign *= -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	num = 0.0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		num = 10.0 * num + (*nptr - '0');
		nptr++;
	}
	if (*nptr == '.')
	{
		nptr++;
		num = extra_func(num, nptr);
	}
	return (num * sign);
}
