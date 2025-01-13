/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:04:41 by amysiv            #+#    #+#             */
/*   Updated: 2024/05/26 16:32:08 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	err(char *error)
{
	perror(error);
	exit(EXIT_FAILURE);
}

void	close_exit(t_fractal *fractal)
{
	mlx_delete_image(fractal->window, fractal->img.img_ptr);
	mlx_close_window(fractal->window);
	mlx_terminate(fractal->window);
	exit(EXIT_SUCCESS);
}

void	data_init(t_fractal *fractal)
{
	fractal->shift_x = 0.0;
	fractal->shift_y = 0.0;
	fractal->zoom = 1.0;
}

void	fractal_init(t_fractal *fractal)
{
	fractal->window = mlx_init(WIDTH, HEIGH, fractal->name, true);
	if (fractal->window == NULL)
	{
		mlx_terminate(fractal->window);
		err("Error in : mlx_init()");
	}
	fractal->img.img_ptr = mlx_new_image(fractal->window, WIDTH, HEIGH);
	if (fractal->img.img_ptr == NULL
		|| mlx_image_to_window(fractal->window, fractal->img.img_ptr, 0, 0) < 0)
	{
		mlx_terminate(fractal->window);
		err("Error in : new image()");
	}
	data_init(fractal);
	mlx_scroll_hook(fractal->window, (mlx_scrollfunc)my_scroll_hook, fractal);
	mlx_loop_hook(fractal->window, (void *)my_hooks, fractal);
	mlx_loop_hook(fractal->window, (void *)fractal_render, fractal);
}
