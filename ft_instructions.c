char    *ft_sa(char *s, int i)
{
    char    tmp;
 
    tmp = s[0];
    s[0] = s[1];
    s[1] = tmp;
    if (i == 0)
        write(1, "sa", 2);
    return (s);
}

char    *ft_sb(char *s, int i)
{
    char    tmp;
 
    tmp = s[0];
    s[0] = s[1];
    s[1] = tmp;
    if (i == 0)
        write(1, "sb", 2);
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
    write(1, "cc", 2);
    return (j);
}

char    *ft_pa(char *sa, char *sb)
{
    char    *new;
    int i;
    int j;

    i = 1;
    new[0] = sb[0];
    j = 0;
    while (sa[i])
    {
        new[i] = sa[j];
        i++;
    }
    new[i] = '\0';
    sb += 1;
    new = ft_strjoin(new, sb);
    return (new);
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
        return (ft_pb());
    else if (i == 5)
        return (ft_ra());
    else if (i == 6)
        return (ft_rb());
    else if (i == 7)
        return (ft_rr());
    else if (i == 8)
        return (ft_rra());
    else if (i == 9)
        return (ft_rrb());
    else if (i == 10)
        return (ft_rrr());
}