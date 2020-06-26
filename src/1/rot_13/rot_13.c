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
		for (char *s = argv[1]; *s; s++)
		{
			char c;
			if (islower(*s))
			{
				if (*s - 'a' < 13)
					c = *s + 13;
				else
					c = *s - 13;
			}
			else if (isupper(*s))
			{
				if (*s - 'A' < 13)
					c = *s + 13;
				else
					c = *s - 13;
			}
			else
				c = *s;
			write(STDOUT_FILENO, &c, 1);
		}
	write(STDOUT_FILENO, "\n", 1);
}
