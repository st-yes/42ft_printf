/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: styes <styes@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 22:44:59 by styes             #+#    #+#             */
/*   Updated: 2021/12/01 18:31:33 by styes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//lenght of %i and %d
static int	len_num(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i++;
		n *= -1;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

//print int
static void	ft_putnbr(int n)
{
	long	n0;

	n0 = n;
	if (n0 < 0)
	{
		ft_print_char('-');
		n0 *= -1;
	}
	if (n0 > 9)
		ft_putnbr(n0 / 10);
	ft_print_char('0' + n0 % 10);
}

//print signed int and return their lenght
int	ft_print_int(int n)
{
	ft_putnbr(n);
	return (len_num(n));
}
