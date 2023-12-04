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

	*current = *root;
	i = 0;
	while (current != NULL)
	{
		i++;
		current = current -> next;
		if (current-> prev == current->next)
			break;
	}
	return (i);
}

int	is_empty(t_node *src)
{
	if (!src)
		return (1);
	return (0);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_sorted(t_node **root)
{
	t_node	*current;

	current = *root;
	while (current && current->next)
	{
		if (current->data > current->next->data)
			return(0);
		current = current->next;
	}
	return (1);
}

long	ft_atoi(const char *str)
{
	long	i;
	long	number;
	int		sign;

	i = 0;
	number = 0;
	sign = 1;
	while (str[i] && (str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number * sign);
}
