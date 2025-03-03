/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:33:49 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/12 12:01:08 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*
int main(void)
{
    // Пример строки для вывода
    char *str = "Hello, world!";

    // Выводим строку с новой строкой в конце
    ft_putendl_fd(str, STDOUT_FILENO);  // Стандартный вывод

    return 0;
}
*/