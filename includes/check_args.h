/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:35:42 by susargsy          #+#    #+#             */
/*   Updated: 2025/02/25 11:34:00 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_ARGS_H
# define CHECK_ARGS_H

void	check_duplicates(int *unordered, int size);
void	check_num1(char *num, char **temp);
void	check_num(char *num, char **temp, int *nums_count);
int		get_nums_count(char **argv);
int		check_args(int argc, char **argv);

#endif   /* CHECK_ARGS_H */