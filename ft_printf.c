/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: styes <styes@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 23:43:08 by styes             #+#    #+#             */
/*   Updated: 2021/12/01 18:37:46 by styes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
A small description of the required conversion:
• %c print a single character.
• %s print a string of characters.
• %p The void * pointer argument is printed in hexadecimal. 
• %d print a decimal (base 10) number.
• %i print an integer in base 10.
• %u print an unsigned decimal (base 10) number.
• %x print a number in hexadecimal (base 16), with lowercase. 
• %X print a number in hexadecimal (base 16), with uppercase.
• %% print a percent sign.*/

#include "ft_printf.h"

static int	ft_format(va_list *ap, char s)
{
	int	c;

	c = 0;
	if (s == 'c')
		c += ft_print_char(va_arg(*ap, int));
	else if (s == 's')
		c += ft_print_str(va_arg(*ap, char *));
	else if (s == 'd' || s == 'i')
		c += ft_print_int(va_arg(*ap, int));
	else if (s == 'x' || s == 'X')
		c += ft_print_hexu(va_arg(*ap, unsigned int), 16, 'x' - s);
	else if (s == 'u')
		c += ft_print_hexu(va_arg(*ap, unsigned int), 10, 0);
	else if (s == 'p')
		c += ft_print_pointer(va_arg(*ap, unsigned long));
	else
		c += ft_print_char('%');
	return (c);
}

static int	finder(char	*set, char c)
{
	int	i;

	i = 0;
	while (set[i])
		if (set[i++] == c)
			return (1);
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		c;

	i = 0;
	c = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] != '%')
			c += ft_print_char(str[i]);
		if (str[i] == '%' && finder("cspdiuxX%", str[i + 1]))
		{
			i++;
			c += ft_format(&ap, str[i]);
		}
		i++;
	}
	va_end(ap);
	return (c);
}
