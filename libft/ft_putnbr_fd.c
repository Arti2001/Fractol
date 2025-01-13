/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:31:44 by amysiv            #+#    #+#             */
/*   Updated: 2023/11/01 16:15:05 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	char	c;

	nbr = (long)n;
	if (nbr < 0)
		write(fd, "-", 1);
	if (nbr / 10)
	{
		if (nbr < 0)
			ft_putnbr_fd((nbr / 10) * -1, fd);
		else
			ft_putnbr_fd((nbr / 10), fd);
	}
	if (nbr < 0)
		c = ((nbr % 10) * -1 + '0');
	else
	{
		c = ((nbr % 10) + '0');
	}
	write(fd, &c, 1);
	return ;
}

// int  main()
//{
//   ft_putnbr_fd(19999999, 0);

//  }