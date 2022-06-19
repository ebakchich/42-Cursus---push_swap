#include "push_swap.h"

int main()
{
    char *s;
    char *ss;

    s = malloc(7);
    ss = malloc(7);
    s = strcpy(s, "123456");
    ss = strcpy(ss, "789789");
    printf("%s", ft_instructions(s, ss, 2));
    return (0);
}
