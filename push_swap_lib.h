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
	struct node	*next;
	struct node	*prev;
	int			data;
}	t_node;

int		list_len(t_node *root);
t_node	*add_node(t_node **root, int value);
t_node	*create_node(int value);
void	sa_swap_nodes(t_node **root);
void	printit(t_node	*root);
void	sa_swap(t_node **root);
void	push_node(t_node **src, t_node **dest);
void	pop_first(t_node **root);
void	remove_node(t_node **root, t_node *del);
void	insert_start(t_node **head, int data);
int		is_empty(t_node *src);
void	rotate_list(t_node **src);
void 	rotate(t_node **src);
void 	reverse_rotate(t_node **src);

#endif