/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:35:42 by susargsy          #+#    #+#             */
/*   Updated: 2025/02/25 11:33:12 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUBBLE_SORT_H
# define BUBBLE_SORT_H

# include <stdbool.h>

void	bubble_sort(int *arr, int size);
int		*copy_into_sorted(int *arr, int size);
bool	is_sorted(int *unordered, int size);
int		*get_nums(int nums_count, char **argv);

#endif   /* BUBBLE_SORT_H */