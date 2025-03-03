/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:05:10 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/11 10:58:58 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr1;

	if (n == 0)
		return (0);
	ptr = (unsigned char *)s1;
	ptr1 = (unsigned char *)s2;
	while ((*ptr == *ptr1) && n - 1 > 0)
	{
		ptr++;
		ptr1++;
		n--;
	}
	return ((int)(*ptr - *ptr1));
}
/*
int main(void)
{
	// Пример данных для сравнения
	const char *str1 = "Hello, World!";
	const char *str2 = "Hello, world!";
	const char *str3 = "Hello, World!";
	const char *str4 = "Hello, World!123";
	// Сравниваем блоки памяти
	int result1 = ft_memcmp(str1, str2, 13);  // Сравнение первых 13 символов
	int result2 = ft_memcmp(str1, str3, 13);  // Сравнение первых 13 символов
	int result3 = ft_memcmp(str1, str4, 16);  // Сравнение первых 16 символов
	// Выводим результаты
	printf("сравнения str1 и str2 (первые 13 символов): %d\n", result1);
	printf("сравнения str1 и str3 (первые 13 символов): %d\n", result2);
	printf("сравнения str1 и str4 (первые 16 символов): %d\n", result3);
	return 0;
}
*/