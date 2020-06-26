#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *, char *);

int
main()
{
	char s1[] = "test string";
	char s2[strlen(s1)];

	ft_strcpy(s2, s1);

	printf("s1: %s\ns2: %s\n", s1, s2);
}
