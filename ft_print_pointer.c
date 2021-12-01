/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: styes <styes@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 22:47:00 by styes             #+#    #+#             */
/*   Updated: 2021/12/01 17:47:57 by styes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//print unsigned long hexadeciamls
static int	ft_print_lhex(unsigned long n)
{
	char			s1[17];
	static int		i;

	i = 0;
	ft_strcpy(s1, "0123456789abcdef");
	if (n > 15)
		ft_print_lhex(n / 16);
	i += ft_print_char(s1[n % 16]);
	return (i);
}

//print %p
int	ft_print_pointer(unsigned long n)
{
	write (1, "0x", 2);
	return (2 + ft_print_lhex(n));
}
