#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	char	i = 'A';

	printf("char = %c\n", i);
	extern int ft_isalpha(char c);
	printf("ret value = %d\n", ft_isalpha(i));

	i = '1';
	printf("char = %c\n", i);
	printf("ret value =%d\n", ft_isalpha(i));
	return (0);
}
