/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 19:28:22 by amysiv            #+#    #+#             */
/*   Updated: 2024/05/28 13:38:05 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	check_fractal(t_fractal *fractal, t_instances *z, t_instances *c)
{
	if (!ft_strncmp("Julia", fractal->name, 5))
	{
		c->re = fractal->julia_x;
		c->im = fractal->julia_y;
	}
	else
	{
		c->re = z->re;
		c->im = z->im;
	}
}

int	psychodelic_mix(int iters, int x, int y)
{
	int	hue;
	int	color;

	hue = 255 - (iters * 255 / ITER);
	if (iters < ITER)
		return (get_rgb(hue * (x * y) % 150, \
		hue + (y * x) % 60, hue * 10, 255));
	color = get_rgb(hue * 60, hue * 150, \
	hue * 30, 255);
	return (color);
}

void	fractal_render(t_fractal *fractal)
{
	int	y;
	int	x;
	int	iters;
	int	color;

	y = 0;
	iters = 0;
	while (y < HEIGH)
	{
		x = 0;
		while (x < WIDTH)
		{
			iters = get_number_iterations(fractal, x, y);
			color = psychodelic_mix(iters, x, y);
			mlx_put_pixel(fractal->img.img_ptr, x, y, color);
			x++;
		}
		y++;
	}
}

int	get_number_iterations(t_fractal *fractal, int x, int y)
{
	t_instances	z;
	t_instances	c;
	int			iters;

	z.re = (rescale(x, MIN_R, MAX_R, WIDTH) * fractal->zoom) + fractal->shift_x;
	z.im = (rescale(y, MAX_R, MIN_R, HEIGH) * fractal->zoom) + fractal->shift_y;
	check_fractal(fractal, &z, &c);
	iters = 0;
	while (iters < ITER)
	{
		z = sum_instances(squer_instances(z), c);
		if (((z.re * z.re) + (z.im * z.im)) > ESCAPE_VALUE)
			break ;
		iters++;
	}
	return (iters);
}
