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

#include "push_swap_lib.h"

void	sa_swap(t_node **root)
{
	int		tmp;
	t_node	*curr_y;
	t_node	*curr_x;

	curr_x = *root;
	curr_y = curr_x->next;
	printf("original head : %d\n", curr_x->data);
	printf("original next : %d\n", curr_y->data);

	tmp = curr_x -> data;
	printf("head tmp : %d\n", tmp);
	curr_x -> data = curr_y -> data;
	curr_y -> data = tmp;
	printf("after head : %d\n", curr_x->data);
	printf("next : %d\n", curr_y->data);
	printit(*root, curr_x);
}

void    push_node(t_node *stack_start, t_node *stack_finish)
{
	t_node	*buff;

	/*Récupérer le premier élément de la stack 
	a ou b et la pull sur la stack actuelle*/
}