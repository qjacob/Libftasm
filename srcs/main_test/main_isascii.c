#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	int	i = 122;

	printf("char value = %d\n", i);
	extern int ft_isascii(int c);
	printf("ret value = %d\n", ft_isascii(i));

	i = 128;
	printf("char value = %d\n", i);
	printf("ret value = %d\n", ft_isascii(i));
	return (0);
}
