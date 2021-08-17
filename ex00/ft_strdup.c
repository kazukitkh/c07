#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int		i;
	char	*c;

	i = 0;
	while (src[i])
		i++;
	c = (char*)malloc(i);
	*c = *src;
	return (c);
}

int	main(int argc, char *argv[])
{
	char	*s;

	s = ft_strdup(argv[1]);
	printf("%p, %d", s, argc);
	return (0);
}