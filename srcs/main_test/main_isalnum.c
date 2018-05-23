#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	char	i = 'A';

	printf("char = %c\n", i);
	extern int ft_isalnum(char c);
	printf("ret value = %d\n", ft_isalnum(i));

	i = ' ';
	printf("char = %c\n", i);
	printf("ret value = %d\n", ft_isalnum(i));
	return (0);
}
