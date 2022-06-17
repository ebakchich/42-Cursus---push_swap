char    *ft_join(char *sa, char *sb)
{
    char    *s;
    int i;
    int j;

    i = 0;
    while(sa[i])
    {
        s[i] = sa[i];
        i++;
    }
    j = 0;
    while(sb[j])
    {
        s[i] = sb[j];
        j++;
    }
    s[i] = '\0';
    return (s);
}

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

char    *ft_instructions(char *sa, char *sb, int i)
{
    if (i == 0)
        return (ft_sa(sa, 0));
    else if (i == 1)
        return (ft_sb(sb, 0));
    else if (i == 2)
        return (ft_ss(sa, sb));
    else if (i == 3)
        return (ft_pa());
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

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s;

    s = malloc(7);
    s[6] = 0;
    s = "houssa";
    printf("%s", s);
    return (0);
}