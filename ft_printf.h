/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: styes <styes@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 22:00:49 by styes             #+#    #+#             */
/*   Updated: 2021/12/01 18:39:11 by styes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);
int		ft_print_char(char c);
int		ft_print_str(char *s);
int		ft_print_hexu(unsigned int n, unsigned int base, int x);
int		ft_print_int(int n);
int		ft_print_pointer(unsigned long n);
char	*ft_strcpy(char *dest, char *src);

#endif
