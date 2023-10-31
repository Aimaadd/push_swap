/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abentaye <abentaye@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 01:33:15 by abentaye          #+#    #+#             */
/*   Updated: 2023/10/22 01:33:15 by abentaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

void	printit(t_node	*root)
{
	t_node *current;
	int		i;

	i = 1;
	current = root;
	while (current)
	{
		printf("%d : %d\n", i, current -> data);
		i++;
		current = current->next;
		if (current == root)
			break;
	}
}
