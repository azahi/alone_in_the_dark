int ft_strlen(char *s)
{
	const char *st = s;
	for (; *s; s++);
	return (s - st);
}
