/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:35:42 by susargsy          #+#    #+#             */
/*   Updated: 2025/02/25 11:39:57 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include "utils.h"
#include "free.h"

void	init_stack(t_stack *st_b, int **sorted)
{
	st_b->head = NULL;
	st_b->tail = NULL;
	st_b->nodes = 0;
	*sorted = NULL;
}

void	error_message(char *sms)
{
	write(2, sms, ft_strlen(sms));
	exit(EXIT_FAILURE);
}

int	get_matrix_size(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
		++i;
	return (i + 1);
}

int	generate_chunk(int size)
{
	int	chunk;

	chunk = 1;
	if (size < 50)
		chunk = 3 + (size - 6) / 7;
	else if (size >= 50 && size < 100)
		chunk = 10 + (size - 50) / 8;
	else if (size >= 100 && size < 350)
		chunk = 18 + (size - 100) / 9;
	else if (size >= 350 && size <= 500)
		chunk = 27 + (size - 350) / 15;
	else if (size > 500)
		chunk = 37 + (size - 500) / 20;
	return (chunk);
}
