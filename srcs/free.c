/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:35:42 by susargsy          #+#    #+#             */
/*   Updated: 2025/02/25 11:40:41 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "utils.h"
#include "free.h"

void	ft_free(int *unordered, int *sorted, char *sms)
{
	free(unordered);
	free(sorted);
	error_message(sms);
}

void	free_matrix(char **matrix, int size)
{
	--size;
	while (size >= 0)
	{
		free(matrix[size]);
		matrix[size] = NULL;
		--size;
	}
	free(matrix);
	matrix = NULL;
}

void	free_and_exit(char **matrix, int size, char *sms)
{
	free_matrix(matrix, size);
	error_message(sms);
}

void	free_list_and_exit(t_stack *stack, int *arrays[], int i)
{
	int		j;
	t_lst	*temp;

	j = -1;
	free(arrays[0]);
	free(arrays[1]);
	while (++j < i)
	{
		temp = stack->head->next;
		free(stack->head);
		stack->head = temp;
	}
	error_message("Error\n");
}

void	free_stacks_and_arrays(t_stack *st_a, t_stack *st_b, int *a1, int *a2)
{
	t_lst	*temp;
	int		i;

	i = -1;
	while (++i < st_a->nodes)
	{
		temp = st_a->head;
		st_a->head = st_a->head->next;
		free(temp);
	}
	if (st_b->head)
	{
		i = -1;
		while (++i < st_a->nodes)
		{
			temp = st_a->head;
			st_a->head = st_a->head->next;
			free(temp);
		}
	}
	free(a1);
	free(a2);
}