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
		for (char *c = argv[1]; *c; c++)
		{
			if (islower(*c))
				for (int i = 0; i <= *c - 'a'; i++)
					write(STDOUT_FILENO, c, 1);
			else if (isupper(*c))
				for (int i = 0; i <= *c - 'A'; i++)
					write(STDOUT_FILENO, c, 1);
			else
				write(STDOUT_FILENO, c, 1);
		}
	}
	write(STDOUT_FILENO, "\n", 1);
}
