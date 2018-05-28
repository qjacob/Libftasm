#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	char	i = 'A';

	printf("\x1B[36m");
	printf("char = %c\n", i);
	extern int ft_isalnum(char c);
	printf("ret value = %d\n", ft_isalnum(i));

	i = ' ';
	printf("char = %c\n", i);
	printf("ret value = %d\n", ft_isalnum(i));
	printf("\x1B[0m");

	printf("\nTest with libc isalnum.\n\n");

	char	i2 = 'A';

	printf("\x1B[32m");
	printf("char = %c\n", i2);
	printf("ret value = %d\n", isalnum(i2));

	i2 = ' ';
	printf("char = %c\n", i2);
	printf("ret value = %d\n", isalnum(i2));	
	printf("\x1B[0m");
	return (0);
}
