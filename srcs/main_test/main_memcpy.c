#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int	main()
{
	char	*src;
	char 	*dest;

	src = strdup("Hello!");
	dest = strdup("World!");
	printf("src: %s\n dest: %s\n", src, dest);
	extern void *ft_memcpy(char *dest, char *src, int size);
	src = ft_memcpy(dest, src, 3);
	printf(" after: src: %s\n dest: %s\n", src, dest);
	return (0);
}