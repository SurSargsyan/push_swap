/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:28:40 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/10 14:18:34 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		if (((unsigned char *)s)[index] == (unsigned char)c)
			return (((unsigned char *)s) + index);
		index++;
	}
	return (NULL);
}
/*
int main(void)
{
	// Пример данных для поиска
	const char *str = "Hello, World!";
	char target1 = 'e';
	char target2 = 'z';
	size_t len = 15; // Длина строки
	// Ищем символы в строке
	char *result1 = ft_memchr(str, target1, len);
	char *result2 = ft_memchr(str, target2, len);
	// Выводим результаты
	if (result1)
		printf("Символ '%c' найден в строке: %s\n", target1, result1);
	else
		printf("Символ '%c' не найден в строке.\n", target1);
	if (result2)
		printf("Символ '%c' найден в строке: %s\n", target2, result2);
	else
		printf("Символ '%c' не найден в строке.\n", target2);
	return 0;
}
*/
