/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:42:06 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/10 15:55:45 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	size;
	char	*dest;

	size = ft_strlen(src);
	dest = (char *)malloc(size * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	ft_memcpy(dest, src, size);
	dest[size] = '\0';
	return (dest);
}
/*
int main(void)
{
    char original[] = "Hello, World!";
    char *duplicate;

    // Дублируем строку с помощью ft_strdup
    duplicate = ft_strdup(original);
    
    if (duplicate == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Печатаем оригинальную и дублированную строки
    printf("Original: %s\n", original);
    printf("Duplicate: %s\n", duplicate);

    // Освобождаем память, выделенную для дублированной строки
    free(duplicate);

    return 0;
}
*/
