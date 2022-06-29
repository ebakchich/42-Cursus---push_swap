#ifndef PIPEX_H
# define PIPEX_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int    *ft_instructions(int *sa, int *sb, int i);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
void    ft_check(int ac, char **av);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
void ft_sorta(int ac, char **av);

#endif