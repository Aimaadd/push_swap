/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_operations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abentaye <abentaye@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 01:35:36 by abentaye          #+#    #+#             */
/*   Updated: 2023/10/22 01:35:36 by abentaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap_lib.h"

t_node	remove_node(t_node **root, int value)
{
	t_node	*current;

	current = *root;
	while (current != NULL)
	{
		if (current -> data == value)
		{
			current->prev->next = current->next;
			current->next->prev = current->prev;
			return (*current);
		}
		current = current -> next;
	}
	return (*current);
}

void	sa_swap(t_node **root)
{
	int		tmp;
	t_node	*curr_y;
	t_node	*curr_x;

	curr_x = *root;
	curr_y = curr_x->next;
	tmp = curr_x -> data;
	printf("head tmp : %d\n", tmp);
	curr_x -> data = curr_y -> data;
	curr_y -> data = tmp;
	printit(*root);
}

int	push_node(t_node *src, t_node *dest)
{
	int		curr;
	int		tmp;

	if (!src)
		return (0);
	curr = src->data;
	if (!dest)
	{
		create_node(0);
		tmp = pop_first(&src);
		add_node(&dest, 0);
	}
	dest->data = curr;
	return (1);
}

void	rotate_node(t_node **root)
{
	t_node	*curr_x;
	t_node	*curr_y;

	curr_x = *root;
	add_node(root, curr_x -> data);
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
/*
Je voudrais que la root soit en fin de liste et que last soit en 
debut de liste
*/