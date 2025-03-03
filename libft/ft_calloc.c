/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:40:56 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/11 14:54:35 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = (void *)malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, (nmemb * size));
	return (array);
}
/*
int main(void)
{
	// Пример выделения памяти для массива
	size_t nmemb = 5;
	size_t size = sizeof(int);

	// Выделяем память с помощью ft_calloc
	int *arr = (int *)ft_calloc(nmemb, size);
	if (arr == NULL)
	{
		printf("Ошибка выделения памяти!\n");
		return 1;
	}

	// Проверяем, что память была правильно инициализирована нулями
	printf("Содержимое массива после ft_calloc:\n");
	for (size_t i = 0; i < nmemb; i++)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
	}

	// Освобождаем память
	free(arr);
	return 0;
}
*/