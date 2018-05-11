#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	char	i = 'A';

	extern int ft_isalpha(char c);
	printf("ret value = %d\n", ft_isalpha(i));
	return (0);
}
