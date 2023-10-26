/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_lib.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abentaye <abentaye@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:53:10 by abentaye          #+#    #+#             */
/*   Updated: 2023/10/22 00:53:10 by abentaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_LIB_H
# define PUSH_SWAP_LIB_H

# include <stdio.h>
# include <limits.h>
# include <stdlib.h>


typedef struct node 
{
	struct node  	*next;
	int				data;
}	t_node;

int     list_len(t_node *root);
void	add_node(t_node **root, int value);
void	swap_nodes(t_node **root, int x, int y);
void	printit(t_node	*root, t_node	*current);
void	sa_swap(t_node **root);

#endif