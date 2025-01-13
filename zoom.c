/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:22:28 by amysiv            #+#    #+#             */
/*   Updated: 2024/05/24 19:23:08 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	my_scroll_hook(double x_delta, double y_delta, void *param)
{
	t_fractal	*fractal;

	fractal = (t_fractal *)param;
	(void ) x_delta;
	if (y_delta < 0)
		fractal->zoom *= 1.05;
	else if (y_delta > 0)
		fractal->zoom *= 0.95;
}
