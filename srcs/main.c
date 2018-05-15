#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	char	*mdr;
	char	*toto;

	mdr = malloc(sizeof(char) * 4);
	toto = malloc(sizeof(char) * 4);
	mdr[0] = 'm';
	mdr[1] = 'd';
	mdr[2] = 'r';
	mdr[3] = '\0';
	extern void *ft_memcpy(char *dest, char *src, size_t len);
	printf("%d\n", ft_memcpy(toto, mdr, 2));
	printf("%s\n", toto);
	return (0);
}
