/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:07:54 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/09 14:32:40 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
int main(void)
{
	// Тестирование различных символов
	char upper = 'A';
	char lower = 'a';
	char non_alpha = '1';
	// Преобразование в нижний регистр
	printf("символ: %c, После ft_tolower: %c\n", upper, ft_tolower(upper));
	// Символ, который уже в нижнем регистре (не должен измениться)
	printf("символ: %c, После ft_tolower: %c\n", lower, ft_tolower(lower));
	// Символ, который не является буквой
	printf("символ: %c, По ft_tolower: %c\n", non_alpha, ft_tolower(non_alpha));
	return 0;
}
*/
