/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 14:11:11 by amysiv            #+#    #+#             */
/*   Updated: 2024/05/26 16:32:24 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	check_input_julia(char **argv)
{
	if (!argv[2][0] && !argv[3][0])
	{
		ft_putstr_fd(ERROR_M, 2);
		exit(EXIT_FAILURE);
	}
	else if (!is_digit_d(argv[2]) || !is_digit_d(argv[3]))
	{
		ft_putstr_fd("Wrong values for Julia set !!\n", 2);
		exit(EXIT_FAILURE);
	}
}

int	main(int argc, char *argv[])
{
	t_fractal	fractal;

	if ((argc == 4 && !ft_strncmp(argv[1], "Julia", 6))
		|| (argc == 2 && !ft_strncmp(argv[1], "Mandelbrot", 11)))
	{
		fractal.name = argv[1];
		if (!ft_strncmp("Julia", fractal.name, 6))
		{
			check_input_julia(argv);
			fractal.julia_x = ft_atdb(argv[2]);
			fractal.julia_y = ft_atdb(argv[3]);
		}
		fractal_init(&fractal);
		mlx_loop(fractal.window);
		mlx_delete_image(fractal.window, fractal.img.img_ptr);
		mlx_terminate(fractal.window);
	}
	else
	{
		ft_putstr_fd(ERROR_M, 2);
		exit(EXIT_FAILURE);
	}
	return (0);
}
