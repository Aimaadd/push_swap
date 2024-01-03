/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abentaye <abentaye@student.s19.be >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:22:54 by abentaye          #+#    #+#             */
/*   Updated: 2024/01/03 17:24:32 by abentaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_min(t_list **stack, int val)
{
	t_list	*head;
	int		min;

	head = *stack;
	min = head->index;
	while (head->next)
	{
		head = head->next;
		if ((head->index < min) && head->index != val)
			min = head->index;
	}
	return (min);
}

static void	swap_if_needed(t_list **stack_a, int min, int next_min)
{
	t_list	*head;

	head = *stack_a;
	if (head->index == min && head->next->index 
		!= next_min && (rotate(stack_a) 
			|| sa(stack_a) || rotate(stack_a)))
		return ;
	if (head->index == next_min && ((head->next->index == min && sa(stack_a)) 
			|| rotate(stack_a)))
		return ;
	if (head->next->index == min && rotate(stack_a))
		return ;
	if (sa(stack_a) && rotate(stack_a))
		return ;
}

void	sort_3(t_list **stack_a)
{
	t_list	*head;
	int		min;
	int		next_min;

	head = *stack_a;
	min = get_min(stack_a, -1);
	next_min = get_min(stack_a, min);
	if (is_sorted(stack_a))
		return ;
	swap_if_needed(stack_a, min, next_min);
}

// static void	sort_3(t_list **stack_a)
// {
// 	t_list	*head;
// 	int		min;
// 	int		next_min;

// 	head = *stack_a;
// 	min = get_min(stack_a, -1);
// 	next_min = get_min(stack_a, min);
// 	if (is_sorted(stack_a))
// 		return ;
// 	if (head->index == min && head->next->index != next_min)
// 	{
// 		ra(stack_a);
// 		sa(stack_a);
// 		rra(stack_a);
// 	}
// 	else if (head->index == next_min)
// 	{
// 		if (head->next->index == min)
// 			sa(stack_a);
// 		else
// 			rra(stack_a);
// 	}
// 	else
// 	{
// 		if (head->next->index == min)
// 			ra(stack_a);
// 		else
// 		{
// 			sa(stack_a);
// 			rra(stack_a);
// 		}
// 	}
// }

void	sort_4(t_list **stack_a, t_list **stack_b)
{
	int	distance;

	if (is_sorted(stack_a))
		return ;
	distance = get_distance(stack_a, get_min(stack_a, -1));
	if (distance == 1)
		ra(stack_a);
	else if (distance == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (distance == 3)
		rra(stack_a);
	if (is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_3(stack_a);
	pa(stack_a, stack_b);
}

void	sort_5(t_list **stack_a, t_list **stack_b)
{
	int	distance;

	distance = get_distance(stack_a, get_min(stack_a, -1));
	if (distance == 1)
		ra(stack_a);
	else if (distance == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (distance == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (distance == 4)
		rra(stack_a);
	if (is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_4(stack_a, stack_b);
	pa(stack_a, stack_b);
}
