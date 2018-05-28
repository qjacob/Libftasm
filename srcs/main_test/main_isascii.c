#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	int	i = 122;

	printf("\x1B[32m");
	printf("char value = %d\n", i);
	extern int ft_isascii(int c);
	printf("ret value = %d\n", ft_isascii(i));

	i = 128;
	printf("char value = %d\n", i);
	printf("ret value = %d\n", ft_isascii(i));
	printf("\x1B[0m");

	printf("\nTest with libc isascii.\n\n");

	int	i2 = 122;

	printf("\x1B[36m");
	printf("char value = %d\n", i2);
	printf("ret value = %d\n", isascii(i2));

	i2 = 128;
	printf("char value = %d\n", i2);
	printf("ret value = %d\n", isascii(i2));
	printf("\x1B[0m");
	return (0);
}
