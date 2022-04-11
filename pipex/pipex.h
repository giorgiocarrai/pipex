/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrai <gcarrai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:17:23 by gcarrai           #+#    #+#             */
/*   Updated: 2022/04/11 19:47:21 by gcarrai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>


typedef struct s_list
{
	void			*content;
	int				n_split;
	struct s_list	*next;
}				t_list;



//utils
size_t	    ft_strlen(const char *s);
char	    **ft_split(char const *s, char c, t_list *list);
char	    *ft_strndup2(const char *s, size_t n);
int	        ft_wrdcnt(char const *s, char c);
int	        ft_strncmp(const char *s1, const char *s2, size_t n);
char	    *ft_strjoin(char const *s1, char const *s2);

//pipex
int	    ft_index_position(char **src, char *to_find);
void	correctav(char **av, char **envp, t_list *list);


#endif

