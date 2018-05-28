#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char	*str;

	extern char *ft_strdup(char *src);
	printf("\x1B[32m");
	str = NULL;
	printf("before: %s, addr: %p\n", str, str);
	str = ft_strdup("Hello World!\n");
	printf("after: %s, addr: %p\n", str, str);
	printf("\x1B[0m");

	printf("\nTest with libc strdup.\n\n");

	char	*str2;

	printf("\x1B[36m");
	str2 = NULL;
	printf("before: %s, addr: %p\n", str2, str2);
	str2 = strdup("Hello World!\n");
	printf("after: %s, addr: %p\n", str2, str2);
	printf("\x1B[0m");	
	return (0);
}