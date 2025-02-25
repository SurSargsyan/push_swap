/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:35:42 by susargsy          #+#    #+#             */
/*   Updated: 2025/02/25 11:38:02 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "butterfly.h"
#include "stack_actions.h"
#include "utils.h"

void	find_max_and_push_b(t_lst *lst, t_stack *stack_a, int size)
{
	int	i;
	int	is_tail;

	i = 0;
	is_tail = 0;
	while (is_tail == 0)
	{
		if (lst->index == size - 1)
		{
			if (i > size - i - 1)
			{
				while (i++ != size)
					reverse_rotate_stack(stack_a, "rra");
			}
			else
				while (i-- > 0)
					rotate_stack(stack_a, "ra");
			break ;
		}
		++i;
		lst = lst->next;
		if (lst == stack_a->head)
			is_tail = 1;
	}
}

void	find_max_and_push_a(t_lst *lst, t_stack *stack_b, int size)
{
	int	i;
	int	is_tail;

	i = 0;
	is_tail = 0;
	while (is_tail == 0)
	{
		if (lst->index == size - 1)
		{
			if (i > size - i - 1)
			{
				while (i++ != size)
					reverse_rotate_stack(stack_b, "rrb");
			}
			else
				while (i-- > 0)
					rotate_stack(stack_b, "rb");
			break ;
		}
		++i;
		lst = lst->next;
		if (lst == stack_b->head)
			is_tail = 1;
	}
}

void	sort_stack(t_stack *st_a, t_stack *st_b)
{
	t_lst	*lst;

	while (st_b->head != NULL)
	{
		lst = st_b->head;
		find_max_and_push_a(lst, st_b, st_b->nodes);
		push_stack(st_b, st_a, "pa");
	}
}

void	make_butterfly(t_stack *st_a, t_stack *st_b, int chunk)
{
	int		counter;
	t_lst	*lst;

	counter = 0;
	lst = st_a->head;
	while (st_a->head != NULL)
	{
		if (lst->index <= counter)
		{
			push_stack(st_a, st_b, "pb");
			rotate_stack(st_b, "rb");
			++counter;
		}
		else if (lst->index <= counter + chunk)
		{
			push_stack(st_a, st_b, "pb");
			++counter;
		}
		else
			rotate_stack(st_a, "ra");
		lst = st_a->head;
	}
}

void	butterfly_algo(t_stack *st_a, t_stack *st_b, int size)
{
	int	chunk;

	chunk = generate_chunk(size);
	make_butterfly(st_a, st_b, chunk);
	sort_stack(st_a, st_b);
}
