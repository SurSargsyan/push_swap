/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:35:42 by susargsy          #+#    #+#             */
/*   Updated: 2025/02/25 11:40:22 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "free.h"

int	find_index(int *arr, int value, int size)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		if (arr[i] == value)
			return (i);
	}
	return (0);
}

t_lst	*make_lst(t_stack *stack, int *arrays[], int size, int i)
{
	t_lst	*new_lst;
	t_lst	*temp_head;

	new_lst = malloc(sizeof(t_lst));
	if (!new_lst)
		free_list_and_exit(stack, arrays, i);
	if (i == 0)
	{
		new_lst->value = arrays[0][0];
		new_lst->index = find_index(arrays[1], new_lst->value, size);
		new_lst->prev = NULL;
	}
	else
	{
		temp_head = stack->head;
		while (temp_head->next != NULL)
			temp_head = temp_head->next;
		new_lst->value = arrays[0][i];
		new_lst->index = find_index(arrays[1], new_lst->value, size);
		temp_head->next = new_lst;
		new_lst->prev = temp_head;
	}
	stack->tail = new_lst;
	new_lst->next = NULL;
	return (new_lst);
}

void	make_stack_a(t_stack *stack, int *unordered, int *sorted, int size)
{
	int	i;
	int	*arrays[2];

	stack->head = NULL;
	stack->tail = NULL;
	arrays[0] = unordered;
	arrays[1] = sorted;
	stack->head = make_lst(stack, arrays, size, 0);
	i = 0;
	while (++i < size)
		make_lst(stack, arrays, size, i);
	stack->tail->next = stack->head;
	stack->head->prev = stack->tail;
	stack->nodes = size;
}