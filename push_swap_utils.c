/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abentaye <abentaye@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 01:26:04 by abentaye          #+#    #+#             */
/*   Updated: 2023/10/22 01:26:04 by abentaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap_lib.h"

//Adds node to list
void	add_node(t_node **root, int value)
{
	t_node	*new_node;
	t_node	*current;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return ;
	new_node->next = NULL;
	new_node->data = value;
	current = *root;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
}

void	swap_nodes(t_node **root, int x, int y)
{
	t_node	*prev_x;
	t_node	*prev_y;
	t_node	*curr_x;
	t_node	*curr_y;
	t_node	*tmp;

	prev_x = NULL;
	curr_x = *root;
	if (curr_x->data == 123)
		printf("tg\n");
	if (x == y)
		return ;
	while (curr_x && curr_x->data != x)
	{
		prev_x = curr_x;
		prev_y = NULL;
		curr_y = *root;
		curr_x = curr_x->next;
	}
	while (curr_y && curr_y->data != y)
	{
		prev_y = curr_y;
		curr_y = curr_y->next;
	}
	if (curr_x == NULL || curr_y == NULL)
		return ;
	if (prev_x != NULL)
		prev_x->next = curr_y;
	else
		*root = curr_y;
	if (prev_y != NULL)
		prev_y->next = curr_x;
	else
		*root = curr_x;
	tmp = curr_y->next;
	curr_y->next = curr_x->next;
	curr_x->next = tmp;
}