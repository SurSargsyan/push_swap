/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:35:42 by susargsy          #+#    #+#             */
/*   Updated: 2025/02/25 12:27:10 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	print_base(ssize_t num, char *base, size_t base_len)
{
	char	str[20];
	size_t	count;
	size_t	rem;
	size_t	i;

	i = 0;
	count = 0;
	if (num == 0)
		count += ft_putchar(base[0]);
	while (num != 0)
	{
		rem = num % base_len;
		str[i] = base[rem];
		num /= base_len;
		++i;
	}
	while (i--)
		count += ft_putchar(str[i]);
	return (count);
}

size_t	ft_putnbr_base(ssize_t nbr, char *base, size_t base_len, char spf)
{
	size_t	count;

	count = 0;
	if ((spf == 'd' || spf == 'i' || spf == 'u') && nbr < 0)
	{
		count += ft_putchar('-');
		nbr = -nbr;
	}
	else if (spf == 'p' && nbr == 0)
	{
		count += ft_putstr("0x0");
		return (count);
	}
	else if (spf == 'p')
		count += ft_putstr("0x");
	count += print_base(nbr, base, base_len);
	return (count);
}
