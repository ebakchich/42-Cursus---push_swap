/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorta.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <ebakchic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 02:53:20 by ebakchic          #+#    #+#             */
/*   Updated: 2022/06/28 01:34:34 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sorta(int ac, char **av)
{
    int    *sa;
    int    *sb;
    int j;
    int i;

    printf("%d\n", ac);
    sa = ft_calloc(ac, sizeof(int));
    i = 1;
    j = 0;
    while (av[i])
    {
        sa[j] = ft_atoi(av[i]);
        i++;
        j++;
    }
    // if (sa[1] < sa[2] && sa[1] < sa[0] && sa[0] < sa[2])
    //     sa = ft_instructions(sa, NULL, 0);
}