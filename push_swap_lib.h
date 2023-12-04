/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_lib.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abentaye <abentaye@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:53:10 by abentaye          #+#    #+#             */
/*   Updated: 2023/10/22 00:53:10 by abentaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_LIB_H
# define PUSH_SWAP_LIB_H

# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# define ERROR_MSG "Error\n"
# define ERROR_MSG_LEN 6

typedef struct node
{
	struct node	*next;
	struct node	*prev;
	int			data;
}	t_node;

int				list_len(t_node *root);
t_node			*add_node(t_node **root, int value);
t_node			*create_node(int value);
void			sa_swap_nodes(t_node **root);
void			printit(t_node	*root);
void			sa_swap(t_node **root);
void			push_node(t_node **src, t_node **dest);
void			pop_first(t_node **root);
void			remove_node(t_node **root, t_node *del);
void			insert_start(t_node **head, int data);
int				is_empty(t_node *src);
int				is_sorted(t_node **root);
void			rotate_list(t_node **src);
void 			rotate(t_node **src);
void 			reverse_rotate(t_node **src);
int				ft_error(void);
void			check_args(int argc, char **argv);
static size_t	get_nb_words(char *s, char c);
static char		*get_next_word(char **s, char c);
static void		free_split(char **tab, size_t len);
char			**ft_split(char const *s, char c);
int				ft_isdigit(int c);
int				is_sorted(t_node **root);
long			ft_atoi(const char *str);
char			*ft_substr(char const *s, unsigned int start, size_t len);
static char		*ft_init(void);
size_t			ft_strlen(const char *str);
static int		contains(int num, char **argv, int i);

#endif