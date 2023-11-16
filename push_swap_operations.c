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

void	remove_node(t_node **root, t_node *del)
{
	t_node	*current;

	if (*root == NULL || del == NULL)
		return ;
	if (*root == del)
	*root = del->next;
	if (del->next != NULL)
		del->next->prev = del->prev;
	if (del->prev != NULL)
		del->prev->next = del->next;
	free (del);
	return ;
	// current = *root;
	// while (current != NULL)
	// {
	// 	if (current -> data == value)
	// 	{
	// 		current->prev->next = current->next;
	// 		current->next->prev = current->prev;
	// 		return (*current);
	// 	}
	// 	current = current -> next;
	// }
	// return (*current);
}

void	sa_swap(t_node **root)
{
	int		tmp;
	t_node	*curr_y;
	t_node	*curr_x;

	curr_x = *root;
	curr_y = curr_x->next;
	tmp = curr_x -> data;
	curr_x -> data = curr_y -> data;
	curr_y -> data = tmp;
	printit(*root);
}

void	push_node(t_node **src, t_node **dest)
{
	t_node	*curr_src;
	t_node	*curr_dest;
	int		tmp;

	if (is_empty(*src) == 1)
		return ;
	tmp = (*src)->data;
	remove_node(src, *src);
	if (is_empty(*dest) == 0)
		add_node(dest, tmp);
	else
		insert_start(dest, tmp);
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

void	insert_start(t_node **head, int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	new_node->data = data;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
/*
Je voudrais que la root soit en fin de liste et que last soit en 
debut de liste
*/
// void rotate_list(t_node **src) 
// {
// 	t_node *current;
//     t_node *tmp;
	
// 	current = *src;
// 	tmp = NULL;
// 	if (*src == NULL)
//         return;
//     do {
//         tmp = current->prev;
//         current->prev = current->next;
//         current->next = tmp;

//         current = current->prev;
//     } while (current != *src);

//     *src = tmp->prev;
// }

void rotate(t_node **src)
{

    t_node *current = *src;

    if (*src == NULL || (*src)->next == *src)
        return;
    *src = (*src)->next;
    current->next->prev = current->prev;
    current->prev->next = current->next;
    current->prev = (*src)->prev;
    current->next = *src;

    (*src)->prev->next = current;
    (*src)->prev = current;
}

void reverse_rotate(t_node **src)
{
    t_node *current = *src;

    if (*src == NULL || (*src)->next == *src)
        return;
    *src = (*src)->prev;
    current->prev->next = current->next;
    current->next->prev = current->prev;
    current->prev = *src;
    current->next = (*src)->next;
    (*src)->next->prev = current;
    (*src)->next = current;
}