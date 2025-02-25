/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:35:42 by susargsy          #+#    #+#             */
/*   Updated: 2025/02/25 11:34:42 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAKE_STACK_H
# define MAKE_STACK_H

# include "push_swap.h"

int		find_index(int *arr, int value, int size);
t_lst	*make_lst(t_stack *stack, int *arrays[], int size, int i);
void	make_stack_a(t_stack *stack, int *unordered, int *sorted, int size);

#endif   /* MAKE_STACK_H */