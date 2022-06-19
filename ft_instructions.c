#include "push_swap.h"

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char    *ft_sa(char *s, int i)
{
    char    tmp;

    tmp = s[0];
    s[0] = s[1];
    s[1] = tmp;
    if (i == 0)
        write(1, "sa\n", 3);
    return (s);
}

char    *ft_sb(char *s, int i)
{
    char    tmp;

    tmp = s[0];
    s[0] = s[1];
    s[1] = tmp;
    if (i == 0)
        write(1, "sb\n", 3);
    return (s);
}

char *ft_ss(char *sa, char  *sb)
{
    char    *new;
    char    *nw;
    char    *j;

    new = ft_sa(sa, 1);
    nw = ft_sb(sb, 1);
    j = ft_strjoin(new, nw);
    write(1, "ss\n", 3);
    return (j);
}

char    *ft_pa(char *sa, char *sb)
{
    char    new[ft_strlen(sa) + 2];
	char	*n;
    int i;
	int	j;

	i = 1;
	j = 0;
	new[0] = sb[0];
	while(sa[i])
	{
		new[i] = sa[j];
		j++;
		i++;
	}
	new[i] = '\0';
    sb += 1;
	n = ft_strjoin(new, sb);
    write(1, "pa\n", 3);
    return (n);
}

char    *ft_pb(char *sa, char *sb)
{
    char    new[ft_strlen(sb) + 2];
	char	*n;
    int i;
	int	j;

	i = 1;
	j = 0;
	new[0] = sa[0];
	while(sa[i])
	{
		new[i] = sb[j];
		j++;
		i++;
	}
	new[i] = '\0';
    sa += 1;
	n = ft_strjoin(sa, new);
    write(1, "pb\n", 3);
    return (n);
}

char    *ft_ra(char *sa, int k)
{
    char    new[ft_strlen(sa) + 1];
    int i;
    int j;

    i = 0;
    j = 1;
    new[ft_strlen(sa) - 1] = sa[0];
    while (sa[j])
    {
        new[i] = sa[j];
        i++;
        j++;
    }
    new[ft_strlen(sa)] = '\0';
    sa = ft_strcpy(sa, new);
    if (k == 0)
        write(1, "ra\n", 3);
    return (sa);
}

char    *ft_rb(char *sb, int k)
{
    char    new[ft_strlen(sb) + 1];
    int i;
    int j;

    i = 0;
    j = 1;
    new[ft_strlen(sb) - 1] = sb[0];
    while (sb[j])
    {
        new[i] = sb[j];
        i++;
        j++;
    }
    new[ft_strlen(sb)] = '\0';
    sb = ft_strcpy(sb, new);
    if (k == 0)
        write(1, "rb\n", 3);
    return (sb);
}

char    *ft_rr(char *sa, char *sb)
{
    char    *a;
    char    *b;
    char    *r;

    a = ft_ra(sa, 1);
    b = ft_rb(sb, 1);
    r = ft_strjoin(a, b);
    write(1, "rr\n", 3);
    return (r);
}

char    *ft_rra(char *sa, int k)
{
    char    new[ft_strlen(sa) + 1];
    int i;
    int j;

    i = 1;
    j = 0;
    new[0] = sa[ft_strlen(sa) - 1];
    while (j < ft_strlen(sa) - 1)
    {
        new[i] = sa[j];
        i++;
        j++;
    }
    new[i] = '\0';
    sa = ft_strcpy(sa, new);
    if (k == 0)
        write(1, "rra\n", 4);
    return (sa);
}

char    *ft_rrb(char *sb, int k)
{
    char    new[ft_strlen(sb) + 1];
    int i;
    int j;

    i = 1;
    j = 0;
    new[0] = sb[ft_strlen(sb) - 1];
    while (j < ft_strlen(sb) - 1)
    {
        new[i] = sb[j];
        i++;
        j++;
    }
    new[i] = '\0';
    sb = ft_strcpy(sb, new);
    if (k == 0)
        write(1, "rrb\n", 4);
    return (sb);
}

char    *ft_rrr(char *sa, char *sb)
{
    char    *a;
    char    *b;
    char    *r;

    a = ft_rra(sa, 1);
    b = ft_rrb(sb, 1);
    r = ft_strjoin(a, b);
    write(1, "rrr\n", 4);
    return (r);
}

char    *ft_instructions(char *sa, char *sb, int i)
{
    if (i == 0)
        return (ft_sa(sa, 0));
    else if (i == 1)
        return (ft_sb(sb, 0));
    else if (i == 2)
        return (ft_ss(sa, sb));
    else if (i == 3)
        return (ft_pa(sa, sb));
    else if (i == 4)
        return (ft_pb(sa, sb));
    else if (i == 5)
        return (ft_ra(sa, 0));
    else if (i == 6)
        return (ft_rb(sb, 0));
    else if (i == 7)
        return (ft_rr(sa, sb));
    else if (i == 8)
        return (ft_rra(sa, 0));
    else if (i == 9)
        return (ft_rrb(sb, 0));
    else if (i == 10)
        return (ft_rrr(sa, sb));
    return (0);
}
