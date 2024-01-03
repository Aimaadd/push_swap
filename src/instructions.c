/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abentaye <abentaye@student.s19.be >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:22:22 by abentaye          #+#    #+#             */
/*   Updated: 2024/01/03 17:05:27 by abentaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Swaps first two elements of a stack | sa and sb

int	swap(t_list **stack)
{
	t_list	*head;
	t_list	*next;
	int		tmp_val;
	int		tmp_index;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	next = head->next;
	if (!head && !next)
		ft_error("Error occured while swapping!");
	tmp_val = head->value;
	tmp_index = head->index;
	head->value = next->value;
	head->index = next->index;
	next->value = tmp_val;
	next->index = tmp_index;
	return (0);
}

int	sa(t_list **stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (0);
}

int	sb(t_list **stack_b)
{
	if (swap(stack_b) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
	return (0);
}

int	ss(t_list **stack_a, t_list **stack_b)
{
	if ((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
		return (-1);
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss", 1);
	return (0);
}

int	push(t_list **stack_to, t_list **stack_from)
{
	t_list	*tmp;
	t_list	*head_to;
	t_list	*head_from;

	if (ft_lstsize(*stack_from) == 0)
		return (-1);
	head_to = *stack_to;
	head_from = *stack_from;
	tmp = head_from;
	head_from = head_from->next;
	*stack_from = head_from;
	if (!head_to)
	{
		head_to = tmp;
		head_to->next = NULL;
		*stack_to = head_to;
	}
	else
	{
		tmp->next = head_to;
		*stack_to = tmp;
	}
	return (0);
}

// int	rb(t_list **stack_b)
// {
// 	if (rotate(stack_b) == -1)
// 		return (-1);
// 	ft_putendl_fd("rb", 1);
// 	return (0);
// }

// int	rr(t_list **stack_a, t_list **stack_b)
// {
// 	if ((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
// 		return (-1);
// 	rotate(stack_a);
// 	rotate(stack_b);
// 	ft_putendl_fd("rr", 1);
// 	return (0);
// }

// int	rrr(t_list **stack_a, t_list **stack_b)
// {
// 	if ((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
// 		return (-1);
// 	reverse_rotate(stack_a);
// 	reverse_rotate(stack_b);
// 	ft_putendl_fd("rrr", 1);
// 	return (0);
// }