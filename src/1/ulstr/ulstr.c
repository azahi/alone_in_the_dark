#include <unistd.h>

int
islower(int c)
{
	return (unsigned)c - 'a' < 26;
}

int
isupper(int c)
{
	return (unsigned)c - 'A' < 26;
}

int
main(int argc, char *argv[])
{
	if (argc == 2)
	{
		for (char *s = argv[1]; *s; s++)
		{
			char c = *s;
			if (islower(c))
				c = c - 'a' + 'A';
			if (isupper(c))
				c = c - 'A' + 'a';
			write(STDOUT_FILENO, &c, 1);
		}
	}
	write(STDOUT_FILENO, "\n", 1);
}
