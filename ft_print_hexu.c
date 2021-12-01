/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: styes <styes@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 22:41:40 by styes             #+#    #+#             */
/*   Updated: 2021/12/01 18:28:16 by styes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
* function used to print unsigned hexacedimal and unsigned int
* if x == 0: hex with lower case, otherwise: hex with upper case
* lenght of the hex output
*/

int	ft_print_hexu(unsigned int n, unsigned int base, int x)
{	
	static int		i;
	char			s1[17];
	char			s2[17];

	i = 0;
	ft_strcpy(s1, "0123456789abcdef");
	ft_strcpy(s2, "0123456789ABCDEF");
	if (n > base - 1)
		ft_print_hexu(n / base, base, x);
	if (!x)
		i += ft_print_char(s1[n % base]);
	else
		i += ft_print_char(s2[n % base]);
	return (i);
}
