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
	printf("\x1B[32m");
	printf("src: %s\n dest: %s\n", src, dest);
	extern void *ft_memcpy(char *dest, char *src, int size);
	src = ft_memcpy(dest, src, 3);
	printf(" after: src: %s\n dest: %s\n", src, dest);
	printf("\x1B[0m");

	printf("\nTest with libc memcpy.\n\n");

	char	*src2;
	char	*dest2;

	src2 = strdup("Hello!");
	dest2 = strdup("World!");
	printf("\x1B[36m");
	printf("src: %s\n dest: %s\n", src2, dest2);
	src2 = memcpy(dest2, src2, 3);
	printf(" after: src: %s\n dest: %s\n", src2, dest2);
	printf("\x1B[0m");
	return (0);
}