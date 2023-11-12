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

// stack_a[0]->prev = NULL
// stack_a[-1]->next = NULL

int	main(int argc, char **argv)
{
	static t_node	*stack_a = NULL;
	static t_node	*stack_b = NULL;

	if (!add_node(&stack_a, 14))
		return (1);
	if (!add_node(&stack_a, 12))
		return (1);
	if (!add_node(&stack_a, 144))
		return (1);
	printit(stack_a);
	sa_swap_nodes(&stack_a);
	printf("----swap-----\n");
	printit(stack_a);
	printf("stack B\n");
	push_node(stack_a, stack_b);
	printit(stack_b);
	// printit(stack_a);
	return (0);
}
