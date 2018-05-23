#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char	*str;

	extern char *ft_strdup(char *src);
	printf("before: %s\n", str);
	str = ft_strdup("Hello World!\n");
	printf("after: %s\n", str);
	return (0);
}