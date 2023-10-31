/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abentaye <abentaye@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:50:29 by abentaye          #+#    #+#             */
/*   Updated: 2023/10/22 00:50:29 by abentaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap_lib.h"

// TODO: update for doubly linked list (last -> next == *root)
int	list_len(t_node *root)
{
	int		i;
	t_node	*current;

	i = 0;
	while (current != NULL)
	{
		i++;
		current = current -> next;
	}
	return (i);
}
