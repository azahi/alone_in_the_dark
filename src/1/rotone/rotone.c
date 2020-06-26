#include <unistd.h>

int
main(int argc, char *argv[])
{
	if (argc == 2)
		for (char *s = argv[1]; *s; s++)
		{
			char c = *s;
			if ((c >= 'A' && c <= 'Y') || (c >= 'a' && c <= 'Z'))
				c += 1;
			else if (c == 'z' || c == 'Z')
				c -= 25;
			write(STDOUT_FILENO, &c, 1);
		}
	write(STDOUT_FILENO, "\n", 1);
}
