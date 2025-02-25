/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_actions.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:35:42 by susargsy          #+#    #+#             */
/*   Updated: 2025/02/25 11:36:01 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_ACTIONS_H
# define STACK_ACTIONS_H

# include "push_swap.h"

void	swap_stack(t_stack *stack, char *action);
void	rotate_stack(t_stack *stack, char *action);
void	reverse_rotate_stack(t_stack *stack, char *action);
void	push_stack(t_stack *from, t_stack *to, char *action);
void	push_stack_2(t_stack *from, char *action);

#endif	/* STACK_ACTIONS_H */