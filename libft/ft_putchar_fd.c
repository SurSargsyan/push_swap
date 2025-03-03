/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:27:58 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/09 15:02:05 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main(void)
{
    // Выводим символ 'A' в стандартный вывод (stdout)
    ft_putchar_fd('A', STDOUT_FILENO);

    // Выводим символ 'B' в стандартный вывод (stdout)
    ft_putchar_fd('B', STDOUT_FILENO);

    // Выводим символ 'C' в стандартный вывод (stdout)
    ft_putchar_fd('C', STDOUT_FILENO);

    // Переход на новую строку для лучшего форматирования
    ft_putchar_fd('\n', STDOUT_FILENO);

    return 0;
}
*/