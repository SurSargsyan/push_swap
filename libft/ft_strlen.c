/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:06:55 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/09 13:52:27 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	const char	*test_strings[] = {
		"Hola, mundo!", // Cadena normal
		"42", // Cadena corta
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ", // Cadena larga
		"", // Cadena vacía
		"1234567890" // Otra cadena corta
	};
	int			i;

	i = 0;
	while (i < 5)
	{
		printf("La longitud de \"%s\" es: "
			"%zu\n", test_strings[i], ft_strlen(test_strings[i]));
		i++;
	}
	return (0);
}
*/