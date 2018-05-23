#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	int	i = 'Z';

	printf("char = %c\n", i);
	extern int ft_tolower(int c);
	printf("ret value = %c\n", (char)ft_tolower(i));

	i = 'z';
	printf("char = %c\n", i);
	printf("ret value = %c\n", (char)ft_tolower(i));
	return (0);
}
