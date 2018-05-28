#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	char	i = '0';

	printf("\x1B[32m");
	printf("char = %c\n", i);
	extern int ft_isdigit(char c);
	printf("ret value = %d\n", ft_isdigit(i));

	i = 'a';
	printf("char = %c\n", i);
	printf("ret value = %d\n", ft_isdigit(i));
	printf("\x1B[0m");

	printf("\nTest with libc isdigit.\n\n");

	char	i2 = '0';

	printf("\x1B[36m");
	printf("char = %c\n", i2);
	printf("ret value = %d\n", isdigit(i2));

	i2 = 'a';
	printf("char = %c\n", i2);
	printf("ret value = %d\n", isdigit(i2));	
	printf("\x1B[0m");
	return (0);
}
