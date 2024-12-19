/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:35:41 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/19 13:05:25 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE 
#  define BUFFER_SIZE 42	
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*get_next_line(int fd);
char	*ft_free(char **str);
#endif