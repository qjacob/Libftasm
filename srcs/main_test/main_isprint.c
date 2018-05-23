#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	int	i = 32;

	printf("char value = %d\n", i);
	extern int ft_isprint(int c);
	printf("ret value = %d\n", ft_isprint(i));

	i = 0;
	printf("char value = %d\n", i);
	printf("ret value = %d\n", i);
	return (0);
}
