#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	int	i = 'z';

	printf("\x1B[32m");
	printf("char = %c\n", i);
	extern int ft_toupper(int c);
	printf("ret value = %c\n", (char)ft_toupper(i));

	i = 'Z';
	printf("char = %c\n", i);
	printf("ret value = %c\n", (char)ft_toupper(i));
	printf("\x1B[0m");

	printf("\nTest with libc toupper.\n\n");

	int	i2 = 'z';

	printf("\x1B[36m");
	printf("char = %c\n", i2);
	printf("ret value = %c\n", (char)toupper(i2));

	i2 = 'Z';
	printf("char = %c\n", i2);
	printf("ret value = %c\n", (char)toupper(i2));
	printf("\x1B[0m");
	return (0);
}
