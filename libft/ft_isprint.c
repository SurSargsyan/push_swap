/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:07:28 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/09 13:48:28 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	test_values[] = {-5, 0, 31, 32, 64, 126, 127, 150};
	int	i;

	i = 0;
	while (i < 8)
	{
		if (ft_isprint(test_values[i]))
			printf("%d es un carácter imprimible.\n", test_values[i]);
		else
			printf("%d no es un carácter imprimible.\n", test_values[i]);
		i++;
	}
	return (0);
}
*/