#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	char	i = '0';

	printf("char = %c\n", i);
	extern int ft_isdigit(char c);
	printf("ret value = %d\n", ft_isdigit(i));

	i = 'a';
	printf("char = %c\n", i);
	printf("ret value = %d\n", ft_isdigit(i));
	return (0);
}
