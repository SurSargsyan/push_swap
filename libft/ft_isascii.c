/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:49:58 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/09 16:31:31 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	test_values[] = {-1, 0, 32, 64, 127, 128, 200};
	int	i;

	i = 0;
	while (i < 7)
	{
		if (ft_isascii(test_values[i]))
			printf("%d es un valor ASCII.\n", test_values[i]);
		else
			printf("%d no es un valor ASCII.\n", test_values[i]);
		i++;
	}
	return (0);
}
*/
