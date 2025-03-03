/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:52:54 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/11 11:00:49 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!str && !len)
		return (0);
	if (to_find[0] == '\0' || to_find == str)
		return ((char *)str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && (i + j) < len)
		{
			if (str[i + j] == '\0' && to_find[j] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		if (to_find[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
/*
int main(void)
{
	// Пример строк для поиска
	const char *str1 = "Hello, World!";
	const char *to_find1 = "World";
	const char *to_find2 = "world";
	const char *to_find3 = "Hello";
	const char *to_find4 = "test";
	size_t len = 12;  // Длина строки для поиска

	// Поиск подстроки в строке
	char *result1 = ft_strnstr(str1, to_find1, len);
	char *result2 = ft_strnstr(str1, to_find2, len);
	char *result3 = ft_strnstr(str1, to_find3, len);
	char *result4 = ft_strnstr(str1, to_find4, len);

	// Выводим результаты
	if (result1)
		printf("Подстрока '%s' найдена: %s\n", to_find1, result1);
	else
		printf("Подстрока '%s' не найдена.\n", to_find1);

	if (result2)
		printf("Подстрока '%s' найдена: %s\n", to_find2, result2);
	else
		printf("Подстрока '%s' не найдена.\n", to_find2);

	if (result3)
		printf("Подстрока '%s' найдена: %s\n", to_find3, result3);
	else
		printf("Подстрока '%s' не найдена.\n", to_find3);

	if (result4)
		printf("Подстрока '%s' найдена: %s\n", to_find4, result4);
	else
		printf("Подстрока '%s' не найдена.\n", to_find4);

	return 0;
}
*/