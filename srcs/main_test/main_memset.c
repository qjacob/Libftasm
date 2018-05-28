#include <string.h>
#include <stdio.h>

int	main()
{
	char *src;

	src = strdup("Hello!");
	extern void *ft_memset(void *b, int c, size_t len);
	printf("\x1B[32m");
	printf("str: %s\n", src);
	src = ft_memset(src, 'a', 3);
	printf("after: %s\n", src);
	printf("\x1B[0m");

	printf("\nTest with libc memset.\n\n");

	char *src2;

	src2 = strdup("Hello!");
	printf("\x1B[36m");
	printf("str: %s\n", src2);
	src2 = memset(src2, 'a', 3);
	printf("after: %s\n", src2);
	printf("\x1B[0m");
	return(0);
}