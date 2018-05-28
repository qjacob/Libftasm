#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	int	i = 'Z';

	printf("\x1B[32m");
	printf("char = %c\n", i);
	extern int ft_tolower(int c);
	printf("ret value = %c\n", (char)ft_tolower(i));

	i = 'z';
	printf("char = %c\n", i);
	printf("ret value = %c\n", (char)ft_tolower(i));
	printf("\x1B[0m");

	printf("\nTest with libc tolower.\n\n");

	int	i2 = 'Z';

	printf("\x1B[36m");
	printf("char = %c\n", i2);
	printf("ret value = %c\n", (char)tolower(i2));

	i2 = 'z';
	printf("char = %c\n", i2);
	printf("ret value = %c\n", (char)tolower(i2));
	printf("\x1B[0m");
	return (0);
}
