/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolinta <ppolinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:13:42 by ppolinta          #+#    #+#             */
/*   Updated: 2023/11/16 14:37:42 by ppolinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_putchar_pf(char c);
int		ft_putint_pf(int n);
int		ft_putuint_pf(unsigned int n);
int		ft_putstr_pf(char *s);
int		ft_putmem_pf(void *mem);
int		ft_puthex_pf(unsigned long n, int cs);
size_t	ft_strlen(const char *str);

#endif