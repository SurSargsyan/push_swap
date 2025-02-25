/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:35:42 by susargsy          #+#    #+#             */
/*   Updated: 2025/02/25 11:28:47 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <sys/types.h>

int		ft_printf(const char *str, ...);
size_t	ft_putnbr_base(ssize_t nbr, char *base, size_t len, char spf);
size_t	ft_putstr(const char *str);
size_t	ft_putchar(const char c);
char	*printf_strchr(const char *s, int c);

#endif  /* FT_PRINTF_H */