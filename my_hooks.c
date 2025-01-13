/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_hooks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:35:41 by amysiv            #+#    #+#             */
/*   Updated: 2024/05/26 16:33:29 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	my_hooks(void *param)
{
	t_fractal	*fractal;

	fractal = (t_fractal *) param;
	if (mlx_is_key_down(fractal->window, MLX_KEY_ESCAPE))
		close_exit(fractal);
	else if (mlx_is_key_down(fractal->window, MLX_KEY_UP))
		fractal->shift_y += (OFFSET_Y * fractal->zoom);
	else if (mlx_is_key_down(fractal->window, MLX_KEY_DOWN))
		fractal->shift_y -= (OFFSET_Y * fractal->zoom);
	else if (mlx_is_key_down(fractal->window, MLX_KEY_LEFT))
		fractal->shift_x -= (OFFSET_X * fractal->zoom);
	else if (mlx_is_key_down(fractal->window, MLX_KEY_RIGHT))
		fractal->shift_x += (OFFSET_X * fractal->zoom);
}
