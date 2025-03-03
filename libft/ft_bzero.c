/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:39:05 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/12 12:00:03 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	buffer1[20] = "Hello, world!";
	char	buffer2[20];

	printf("Antes de ft_bzero:\n");
	printf("buffer1: \"%s\"\n", buffer1);
	ft_bzero(buffer1, 5);
	printf("\nDespués de ft_bzero en buffer1:\n");
	printf("buffer1: \"%s\"\n", buffer1);
	ft_bzero(buffer2, 5);
	printf("\nDespués de bzero en buffer2:\n");
	printf("buffer2: \"%s\"\n", buffer2);
	return (0);
}
*/
/*

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}// sdfadfjja
}
*/