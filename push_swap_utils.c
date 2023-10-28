/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abentaye <abentaye@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 21:46:25 by abentaye          #+#    #+#             */
/*   Updated: 2023/10/27 21:46:25 by abentaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap_lib.h"

//Adds node to list
void	add_node(t_node **root, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return ;
	new_node->data = value;
	new_node -> prev = NULL;
	new_node -> next = *root;
	if (!root)
		(*root)-> prev = new_node;
	*root = new_node;
}

void	sa_swap_nodes(t_node **root)
{
	t_node	*curr_x;
	t_node	*curr_y;
	t_node	*tmp;

	if (*root == NULL || (*root)-> next == NULL)
		return ;
	curr_x = *root;
	curr_y = (*root)-> next;
	curr_x -> next = curr_y -> next;
	curr_y -> next = curr_x;
	*root = curr_y;
}
