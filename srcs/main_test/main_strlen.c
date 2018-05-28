#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	extern int ft_strlen(char *s);
	printf("\x1B[32m");
	printf("ret value for \"HELLO\" = %d\n", ft_strlen("HELLO"));
	printf("\x1B[0m");

	printf("\nTest with libc strlen.\n\n");

	printf("\x1B[36m");
	printf("ret value for \"HELLO\" = %zu\n", strlen("HELLO"));
	printf("\x1B[0m");
	return (0);
}
