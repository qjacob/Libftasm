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
	extern char *ft_strdup(char *s1);
	printf("OUI\n");
	printf("addr: %s\n", mdr);
	printf("result: %s\n", ft_strdup(mdr));
	printf("NON\n");
	return (0);
}
