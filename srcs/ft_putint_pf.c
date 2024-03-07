/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolinta <ppolinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:39:28 by ppolinta          #+#    #+#             */
/*   Updated: 2023/11/16 16:51:13 by ppolinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putint_pf(int n)
{
	int		count;

	if (n == -2147483648)
		return (write (1, "-2147483648", 11));
	count = 0;
	if (n < 0)
	{
		count += ft_putchar_pf('-');
		n *= -1;
	}
	if (n > 9)
		count += ft_putint_pf(n / 10);
	count += ft_putchar_pf((n % 10) + '0');
	return (count);
}
