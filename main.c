#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}


void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (d > s)
		while (++i <= len)
			d[len - i] = s[len - i];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}


size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if (count == 0 || size == 0)
		return (malloc(0));
	str = malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	lens1;
	size_t	lens2;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	str = ft_calloc(lens1 + lens2 + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_memmove(str, s1, lens1);
	ft_memmove(str + lens1, s2, lens2);
	str[lens1 + lens2 + 1] = '\0';
	return (str);
}

char    *ft_pa(char *sa, char *sb)
{
    char    *new;
    int i;

	i = 0;
	while(sa[i])
	{
		new[i] = sa[i];
		i++;
	}
	new[i] = '\0';
    sb += 1;
    printf("%s\n", new);
    new = ft_strjoin(new, sb);
    return (new);
}

int main()
{
    char *s;
    char *ss;

    s = malloc(7);
    ss = malloc(7);
    s = strcpy(s, "123456");
    ss = strcpy(ss, "789789");
    printf("%s", ft_pa(s, ss));
    return (0);
}