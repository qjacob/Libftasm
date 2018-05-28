#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	extern int ft_puts(char *s);
	printf("\x1B[32m");
	printf("ret value for \"HELLO\" = %d\n", ft_puts("HELLO"));
	printf("\x1B[0m");

	printf("\nTest with libc puts.\n\n");

	printf("\x1B[36m");
	printf("ret value for \"HELLO\" = %d\n", ft_puts("HELLO"));
	printf("\x1B[0m");	
	return (0);
}
