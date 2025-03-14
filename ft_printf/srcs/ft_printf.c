/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:35:42 by susargsy          #+#    #+#             */
/*   Updated: 2025/02/25 12:27:07 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	print_spf(const char c, va_list ap)
{
	size_t	count;
	char	*lower_hex;
	char	*upper_hex;

	count = 0;
	lower_hex = "0123456789abcdef";
	upper_hex = "0123456789ABCDEF";
	if (c == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (c == '%')
		count += ft_putchar('%');
	else if (c == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr_base(va_arg(ap, int), "0123456789", 10, c);
	else if (c == 'u')
		count += ft_putnbr_base(va_arg(ap, unsigned), "0123456789", 10, c);
	else if (c == 'x')
		count += ft_putnbr_base(va_arg(ap, unsigned), lower_hex, 16, c);
	else if (c == 'X')
		count += ft_putnbr_base(va_arg(ap, unsigned), upper_hex, 16, c);
	else if (c == 'p')
		count += ft_putnbr_base(va_arg(ap, long), lower_hex, 16, c);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	char	*spf;
	va_list	ap;
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	va_start(ap, str);
	spf = "cspdiuxX%";
	while (str[i])
	{
		if (str[i] == '%' && printf_strchr(spf, str[i + 1]))
		{
			count += print_spf(str[i + 1], ap);
			++i;
		}
		else
			count += ft_putchar(str[i]);
		++i;
	}
	va_end(ap);
	return (count);
}
