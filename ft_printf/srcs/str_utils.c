/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:35:42 by susargsy          #+#    #+#             */
/*   Updated: 2025/02/25 12:27:12 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putchar(const char c)
{
	write (1, &c, 1);
	return (1);
}

size_t	ft_putstr(const char *str)
{
	size_t	i;

	if (!str)
		return (ft_putstr("(null)"));
	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		++i;
	}
	return (i);
}

char	*printf_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		++i;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (0);
}
