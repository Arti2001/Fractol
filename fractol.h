/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 14:10:58 by amysiv            #+#    #+#             */
/*   Updated: 2024/05/28 13:43:19 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

//DISPLAY INITS
# define WIDTH			900
# define HEIGH			900
# define OFFSET_Y		0.3
# define OFFSET_X		0.3

//MATH INITS
# define ITER			150
# define MAX_ITER		100
# define MAX_R			2.0
# define MIN_R			-2.0
# define ESCAPE_VALUE	4

//ERROR
# define ERROR_M	"Please enter:\n\"./fractol Mandelbrot\"\n or \
	\n\"./fractol Julia < value 1 > < value 2 >\"\n"

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "MLX42/include/MLX42/MLX42.h"
# include "libft/libft.h"
# include <math.h>

typedef struct s_instances
{
	double	re;//x
	double	im;//y
}	t_instances;

typedef struct s_img
{
	mlx_image_t		*img_ptr;
	uint8_t			*pixels_ptr;
}	t_img;

typedef struct t_fractal
{
	//MLX
	t_img	img;
	mlx_t	*window;
	char	*name;
	//SHIFTING AN IMAGE
	double	shift_x;
	double	shift_y;
	//JULIA SET PARAMETERES
	double	julia_x;
	double	julia_y;
	//ZOOM
	double	zoom;

}	t_fractal;

//INITIALIZATION
void		fractal_init(t_fractal *fractal);
void		data_init(t_fractal *fractal);

//ERROR MESSAGE
void		err(char *error);

//RENDER
int			get_number_iterations(t_fractal *fractal, int x, int y);
void		fractal_render(t_fractal *fractal);

//MATH
double		rescale(double target, double min, double max, double old_max);
t_instances	sum_instances(t_instances z1, t_instances z2);
t_instances	squer_instances(t_instances z);
int			is_digit_d(char *str);

//HOOKSmke fclean
void		my_hooks(void *param);
void		my_scroll_hook(double x_delta, double y_delta, void *param);

//COLORS
int			get_rgb(int r, int g, int b, int a);

//EXIT_CLEAN
void		close_exit(t_fractal *fractal);

//CHEKS_INPUT_FOR_JULIA
void		check_input_julia(char **argv);
void		check_fractal(t_fractal *fractal, t_instances *z, t_instances *c);

#endif