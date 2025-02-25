/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bufferfly.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:35:42 by susargsy          #+#    #+#             */
/*   Updated: 2025/02/25 11:33:35 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUTTERFLY_H
# define BUTTERFLY_H

# include "push_swap.h"

void	find_max_and_push_b(t_lst *lst, t_stack *stack_a, int size);
void	find_max_and_push_a(t_lst *lst, t_stack *stack_b, int size);
void	sort_stack(t_stack *st_a, t_stack *st_b);
void	make_butterfly(t_stack *st_a, t_stack *st_b, int chunk);
void	butterfly_algo(t_stack *st_a, t_stack *st_b, int size);

#endif  /* BUTTERFLY_H */