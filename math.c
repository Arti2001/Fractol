/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:32:56 by amysiv            #+#    #+#             */
/*   Updated: 2024/05/26 20:54:08 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

//rescaling
double	rescale(double target, double new_min, double new_max, double old_max)
{
	return ((new_max - new_min) * (target - 0) / (old_max - 0) + new_min);
}

t_instances	sum_instances(t_instances z1, t_instances z2)
{
	t_instances	result;

	result.re = z1.re + z2.re;
	result.im = z1.im + z2.im;
	return (result);
}

// re (re^2 - im^2)
//imaginarim  2*re*im
t_instances	squer_instances(t_instances z)
{
	t_instances	result;

	result.re = (z.re * z.re) - (z.im * z.im);
	result.im = 2 * z.re * z.im;
	return (result);
}

int	is_digit_d(char *str)
{
	int	i;
	int	dot;

	dot = 0;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '0' && (str[i + 1] != '.'))
		return (0);
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
		if (str[i] == '.' && dot == 0)
		{
			dot++;
			i++;
		}
	}
	return (1);
}
