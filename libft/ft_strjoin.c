/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:34:23 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/09 14:50:33 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		a;
	int		b;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	i = 0;
	str = malloc(a + b + 1);
	if (!str)
		return (NULL);
	while (a--)
	{
		str[i] = s1[i];
		i++;
	}
	a = i;
	i = 0;
	while (b--)
		str[a++] = s2[i++];
	str[a] = '\0';
	return (str);
}
/*
int main(void)
{
	// Пример строк для объединения
	char *s1 = "Hello, ";
	char *s2 = "world!";

	// Соединяем строки с помощью ft_strjoin
	char *result = ft_strjoin(s1, s2);

	// Проверка результата
	if (result)
	{
		printf("Результат соединения строк:\n%s\n", result);
		free(result);  // Освобождаем память после использования
	}
	else
	{
		printf("Ошибка выделения памяти для соединенной строки!\n");
	}

	return 0;
}
*/