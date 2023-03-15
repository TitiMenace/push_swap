/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmechety <rmechety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:52:24 by rmechety          #+#    #+#             */
/*   Updated: 2023/03/15 07:39:54 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>
# include <unistd.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 100
#endif 

/* -------------------------------------------------------------------------- */
/*                   FILE = src_bonus/get_next_line_utils.c                   */
/* -------------------------------------------------------------------------- */
int	ft_strlen(char *str);
char	*ft_strndup(char *str);
int	check_buff(char *buffer, char c);
char	*ft_strjoin(char *remain, char *buffer);

/* -------------------------------------------------------------------------- */
/*                         FILE = src_bonus/checker.c                         */
/* -------------------------------------------------------------------------- */
int	ft_strcmp(char *s1, char *s2);
int	read_loop();
int	checker(char *str);
int	main(void);

/* -------------------------------------------------------------------------- */
/*                      FILE = src_bonus/get_next_line.c                      */
/* -------------------------------------------------------------------------- */
char	*ft_fill_line(char *buffer, int fd, char **remain);
char	*clean_remain(char *remain);
char	*get_next_line(int fd);
int	main();


#endif
