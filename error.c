/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abentaye <abentaye@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:56:30 by abentaye          #+#    #+#             */
/*   Updated: 2023/11/27 15:29:00 by abentaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

int    ft_error(void)
{
    write(STDERR_FILENO, ERROR_MSG, ERROR_MSG_LEN);
    exit (0);
    return (1);
}