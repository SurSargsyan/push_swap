/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:32:36 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/10 18:57:15 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/*
int main(void)
{
    // Пример строки для вывода
    char *str = "Hello, world!";

    // Выводим строку на экран (stdout) с помощью ft_putstr_fd
    ft_putstr_fd(str, STDOUT_FILENO);

    // Переход на новую строку для удобства вывода
    ft_putchar_fd('\n', STDOUT_FILENO);

    return 0;
}
*/