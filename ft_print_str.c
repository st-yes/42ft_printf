/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: styes <styes@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 22:10:02 by styes             #+#    #+#             */
/*   Updated: 2021/12/01 18:34:26 by styes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putstr(char *s)
{
	if (*s)
	{
		ft_print_char (*s);
		ft_putstr (s + 1);
	}	
}

int	ft_print_str(char *s)
{
	int	len;

	len = 0;
	if (!s)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (s[len])
		len++;
	ft_putstr(s);
	return (len);
}
