/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:16:18 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/10 12:37:55 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n) && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char)s1[i] - (unsigned char)s2[i]));
		i++;
	}
	return (0);
}
/*
int main(void)
{
	// Пример строк для сравнения
	const char *str1 = "Hello, World!";
	const char *str2 = "Hello, world!";
	const char *str3 = "Hello";
	const char *str4 = "Hello, World!";
	// Сравниваем строки
	int result1 = ft_strncmp(str1, str2, 10); // Сравнение первых 10 символов
	int result2 = ft_strncmp(str1, str3, 5);  // Сравнение первых 5 символов
	int result3 = ft_strncmp(str1, str4, 15); // Сравнение всех 15 символов
	// Выводим результаты
	printf("сравнения str1 и str2 (первые 10 символов): %d\n", result1);
	printf("сравнения str1 и str3 (первые 5 символов): %d\n", result2);
	printf("сравнения str1 и str4 (первые 15 символов): %d\n", result3);
	return 0;
}
*/
