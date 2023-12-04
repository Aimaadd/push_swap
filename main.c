/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abentaye <abentaye@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:56:36 by abentaye          #+#    #+#             */
/*   Updated: 2023/12/04 14:34:19 by abentaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

int main(int argc, char **argv)
{
    static t_node   *stack_a = NULL;
    static t_node   *stack_b = NULL;
    char            **numbers;
    int             i;

    i = 0;
    check_args(argc, argv);
    numbers = argv;
    while (numbers[i])
    {
        add_node(&stack_a, ft_atoi(numbers[i]));
        i++;
    }
    is_sorted(&stack_a);
    printit(stack_a);
}