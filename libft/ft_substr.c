/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:23:28 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/09 14:48:57 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main(void)
{
	// Пример строк
	char *str = "Hello, world!";
	unsigned int start = 7;
	size_t len = 5;

	// Извлекаем подстроку с помощью ft_substr
	char *substr = ft_substr(str, start, len);

	// Проверка результата
	if (substr)
	{
		printf("Исходная строка: '%s'\n", str);
		printf("Подстрока: '%s'\n", substr);
		free(substr);  // Освобождаем память после использования
	}
	else
	{
		printf("Ошибка выделения памяти для подстроки!\n");
	}

	return 0;
}
*/
