/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortings.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:35:42 by susargsy          #+#    #+#             */
/*   Updated: 2025/02/25 11:35:33 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTINGS_H
# define SORTINGS_H

# include "push_swap.h"

void	double_sort(int *unordered, int *sorted);
void	triple_sort(t_stack *stack_a);
void	fourple_sort(t_stack *stack_a, t_stack *stack_b, int size);
void	fiveple_sort(t_stack *stack_a, t_stack *stack_b, int size);
void	forbbiden_sorting(int size, t_stack *stack_a, t_stack *stack_b);

#endif   /* SORTINGS_H */