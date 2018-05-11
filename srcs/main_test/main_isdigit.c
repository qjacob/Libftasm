#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	char	i = 'a';

	extern int ft_isdigit(char c);
	printf("ret value = %d\n", ft_isdigit(i));
	return (0);
}
