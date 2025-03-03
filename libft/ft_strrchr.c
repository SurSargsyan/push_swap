/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:10:54 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/10 14:14:12 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}
/*
int main(void)
{
	// Пример строки и символов для поиска
	const char *str = "Hello, World!";
	char ch1 = 'o';
	char ch2 = 'z';
	// Ищем символ в строке
	char *result1 = ft_strrchr(str, ch1);
	char *result2 = ft_strrchr(str, ch2);
	// Выводим результаты
	if (result1)
		printf("Последнее символа '%c' найдено в строке: %s\n", ch1, result1);
	else
		printf("Символ '%c' не найден в строке.\n", ch1);
	if (result2)
		printf("Последнее символа '%c' найдено в строке: %s\n", ch2, result2);
	else
		printf("Символ '%c' не найден в строке.\n", ch2);
	return 0;
}
*/