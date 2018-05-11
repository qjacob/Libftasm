#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	char	i = 'A';

	extern int ft_isalnum(char c);
	printf("ret value = %d\n", ft_isalnum(i));
	return (0);
}
