/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkvalues.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abentaye <abentaye@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:58:19 by abentaye          #+#    #+#             */
/*   Updated: 2023/12/04 14:29:20 by abentaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

void check_args(int argc, char **argv)
{
    int     i;
    long    temp;
    char    **args;

    i = 1;
	if (argc < 2)
		return ;
	if (argc == 2)
        args = ft_split(argv[1], ' ');
    if (argc > 2)
    {
        args = argv;
    }
    while (args[i])
    {
        if (ft_isdigit(*args[i]))
            temp = ft_atoi(args[i]);
		else
			ft_error();
        if (contains(temp, args, i))
            ft_error();
        if (temp < -2147483648 || temp > 2147483647)
            ft_error();
        i++;
    }
}

static char	*ft_init(void)
{
	char	*substr;

	substr = malloc(sizeof(char) * 1);
	if (!substr)
		return (NULL);
	substr[0] = '\0';
	return (substr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	s_len;
	char			*substr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
	{
		substr = ft_init();
		return (substr);
	}
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
size_t	ft_strlen(const char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
static int  contains(int num, char **argv, int i)
{
    i++;
    while (argv[i])
    {
        if(ft_atoi(argv[i]) == num)
            return (1);
        i++;
    }
    return (0);
}