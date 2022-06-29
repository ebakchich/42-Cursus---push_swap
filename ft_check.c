/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <ebakchic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 01:57:37 by ebakchic          #+#    #+#             */
/*   Updated: 2022/06/25 02:47:20 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_check_dup(char **av)
{
    int i;
    int j;
    
    i = 0;
    while (av[i])
    {
        j = i + 1;
        while (av[j])
        {
            if (ft_atoi(av[i]) == ft_atoi(av[j]))
                exit(EXIT_FAILURE);
            j++;
        }
        i++;
    }
}

void    ft_check_mnmx(char **av)
{
    char    *max;
    int i;

    i = 1;
    while(av[i])
    {
        ft_atoi(av[i]);
        i++;
    }
}

void    ft_nostr(char **av)
{
    int i;
    int j;

    i = 1;
    while (av[i])
    {
        j = 0;
        while(av[i][j])
        {
            if (av[i][j] < 48 && av[i][j] > 57)
                exit(EXIT_FAILURE);
            j++;
        }
        i++;
    }
}

void    ft_check(int ac, char **av)
{
    if (ac == 1)
        exit(EXIT_FAILURE);
    ft_nostr(av);
    ft_check_mnmx(av);
    ft_check_dup(av);
}