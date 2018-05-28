#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	int	i = 32;

	printf("\x1B[32m");
	printf("char value = %d\n", i);
	extern int ft_isprint(int c);
	printf("ret value = %d\n", ft_isprint(i));

	i = 0;
	printf("char value = %d\n", i);
	printf("ret value = %d\n", i);
	printf("\x1B[0m");

	printf("\nTest with libc isprint.\n\n");

	int	i2 = 32;

	printf("\x1B[36m");
	printf("char value = %d\n", i2);
	printf("ret value = %d\n", ft_isprint(i2));

	i2 = 0;
	printf("char value = %d\n", i2);
	printf("ret value = %d\n", i2);
	printf("\x1B[0m");
	return (0);
}
