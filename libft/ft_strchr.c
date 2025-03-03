/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:09:46 by susargsy          #+#    #+#             */
/*   Updated: 2025/02/25 12:28:26 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}
/*
int main(void)
{
	// Пример строки и символов для поиска
	const char *str = "Hello, World!";
	char ch1 = 'o';
	char ch2 = 'k';
	// Ищем символ в строке
	char *result1 = ft_strchr(str, ch1);
	char *result2 = ft_strchr(str, ch2);
	// Выводим результаты
	if (result1)
		printf("Символ '%c' найден в строке: %s\n", ch1, result1);
	else
		printf("Символ '%c' не найден в строке.\n", ch1);
	if (result2)
		printf("Символ '%c' найден в строке: %s\n", ch2, result2);
	else
		printf("Символ '%c' не найден в строке.\n", ch2);
	return 0;
}
*/