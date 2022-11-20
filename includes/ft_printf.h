/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:42:51 by wchen             #+#    #+#             */
/*   Updated: 2022/11/06 17:15:10 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int	ft_printf(const char *format, ...);
int	print_char(int chr);
int	print_str(char *str);
int	print_int(int integer);
int	print_unint(unsigned int un_int);
int	print_x(unsigned int un_int);
int	print_bx(unsigned int un_int);
int	print_ptr(unsigned long long uint_ptr);

#endif
