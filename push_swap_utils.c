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

t_node	*get_last_node(t_node *root)
{
	t_node	*current;

	if (!root)
		return (NULL);
	current = root;
	while (current->next && current->next != root)
	{
		current = current->next;
	}
	return (current);
}

t_node	*add_node(t_node **root, int value)
{
	t_node	*node;
	t_node	*last_node;

	node = create_node(value);
	if (!node)
		return (NULL);

	if (!*root)
	{
		*root = node;
		node->next = node;
		node->prev = node;
		return (node);
	}
	last_node = get_last_node(*root);
	node->next = *root;
	node->prev = last_node;
	last_node->next = node;
	(*root)->prev = node;
	*root = node;
	return (node);
}

t_node	*create_node(int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);

	new_node->data = value;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

void	sa_swap_nodes(t_node **root)
{
	t_node	*curr_x;
	t_node	*curr_y;
	t_node	*next_y;
	t_node	*last;

	if (*root == NULL || (*root)-> next == NULL || (*root)->next == *root)
		return ;
	curr_x = *root;
	curr_y = (*root)->next;
	next_y = (*root)->next->next;
	last = curr_x->prev;

	curr_y->next = curr_x;
	curr_x->next = next_y;

	curr_x->prev = curr_y;
	curr_y->prev = last;

	if (next_y && next_y != *root)
		next_y->prev = curr_x;
	last->next = curr_y;

	*root = curr_y;
}
