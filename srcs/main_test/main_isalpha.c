#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int		main()
{
	char	i = 'A';

	printf("\x1B[32m");
	printf("char = %c\n", i);
	extern int ft_isalpha(char c);
	printf("ret value = %d\n", ft_isalpha(i));

	i = '1';
	printf("char = %c\n", i);
	printf("ret value =%d\n", ft_isalpha(i));
	printf("\x1B[0m");

	printf("\nTest with libc isalpha.\n\n");

	char	i2 = 'A';

	printf("\x1B[36m");
	printf("char = %c\n", i2);
	printf("ret value = %d\n", isalpha(i2));

	i = '1';
	printf("char = %c\n", i2);
	printf("ret value =%d\n", isalpha(i2));
	printf("\x1B[0m");
	return (0);
}
