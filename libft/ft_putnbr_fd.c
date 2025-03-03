/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:37:53 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/09 15:05:29 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd((nb % 10) + '0', fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}
/*
int main(void)
{
    // Пример числа для вывода
    int num = -123456;

    // Выводим число в стандартный вывод
    ft_putnbr_fd(num, STDOUT_FILENO);  // Стандартный вывод

    // Переход на новую строку для удобства вывода
    ft_putchar_fd('\n', STDOUT_FILENO);

    return 0;
}
*/