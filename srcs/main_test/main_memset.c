#include <string.h>
#include <stdio.h>

int	main()
{
	char *src;

	src = strdup("Hello!");
	extern void *ft_memset(void *b, int c, size_t len);
	printf("str: %s\n", src);
	src = ft_memset(src, 'a', 3);
	printf("after: %s\n", src);
	return(0);
}