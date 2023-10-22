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

int init_list(t_node **t_node, int len)
{
    *t_node = malloc(len * sizeof(t_node));
    if(!*t_node)
        return (0);
    return (1);
}

t_node	*new_list(int data)
{
	t_node	current;

	current = malloc(sizeof(t_node));
	if (!current)
		return (NULL);
	current -> data = data;
	current -> next = NULL;
	return (current);
}

int	main(int argc, char **argv)
{
    t_node *stack_a;
    t_node *stack_b;
    t_node *tmp;
    
	init_list(&tmp, list_len(stack_a));

	
    printf("longueur de liste A : %d", list_len(stack_a));
	// 1st element in the list + next one set to NULL
	current -> data = 123;
	//adding 1 elements 1 by 1 in list
	add_node(&root, 14);
	add_node(&root, 11);
	add_node(&root, 911);
    add_node(&root, 15);
	printit(root, current);
	printf("-----------\n");
	swap_nodes(&root, 14, 911);
	printit(root, current);
	printf("-----------\n");
	swap_nodes(&root, 11, 911);
	printit(root, current);
	printf("-----------\n");
	sa_swap(&root);
    printf("la longueur de la liste %d\n", list_len(current));
	return (0);
}
