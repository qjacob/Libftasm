#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	char	*s1;
	char	*s2;

	s1 = malloc(sizeof(char) * 12);
	s2 = malloc(sizeof(char) * 6);
	s1 = strcpy(s1, "Hello ");
	s2 = strcpy(s2, "World");
	s1[11] = 'x';
	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	extern char *ft_strcat(char *s1, char *s2);
	s1 = ft_strcat(s1, s2);
	printf("s1 = %s\n", s1);
	return (0);
}
