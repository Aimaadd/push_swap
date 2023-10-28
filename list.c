/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abentaye <abentaye@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:50:17 by abentaye          #+#    #+#             */
/*   Updated: 2023/10/22 00:50:17 by abentaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

int	init_list(t_node **t_node, int len)
{
	*t_node = malloc(len * sizeof(t_node));
	if (!*t_node)
		return (0);
	return (1);
}

t_node	*new_list(int data)
{
	t_node	*current;

	current = malloc(sizeof(t_node));
	if (!current)
		return (NULL);
	current -> data = data;
	current -> next = current;
	current -> prev = current;
	return (current);
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	t_node	*current;
	t_node	*root;
	int		data;

	init_list(&stack_a, list_len(stack_a));
	stack_a -> data = 35;
	// 1st element in the list + next one set to NULL
	// new_list(data);
	// printf("premier node %d\n",current -> data);
	//adding 1 elements 1 by 1 in list
	add_node(&stack_a, 12);
	add_node(&stack_a, 144);
	printit(stack_a, current);
	sa_swap_nodes(&stack_a);
	printf("-------------\n");
	printf("%d\n", stack_a -> prev ->data);
	printit(stack_a, current);
	return (0);
}
