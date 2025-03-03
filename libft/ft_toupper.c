/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:35:31 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/09 14:30:52 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	// Тестирование различных символов
	char lower = 'a';
	char upper = 'A';
	char non_alpha = '1';
	// Преобразование в верхний регистр
	printf("символ: %c, После ft_toupper: %c\n", lower, ft_toupper(lower));
	// Символ, который уже в верхнем регистре (не должен измениться)
	printf("символ: %c, После ft_toupper: %c\n", upper, ft_toupper(upper));
	// Символ, который не является буквой
	printf("символ: %c,ft_toupper: %c\n", non_alpha, ft_toupper(non_alpha));
	return (0);
}
*/
