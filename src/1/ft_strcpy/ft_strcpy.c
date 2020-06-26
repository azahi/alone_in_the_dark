char *
ft_strcpy(char *dst, char *src)
{
	char *td = dst;
	while ((*dst++ = *src++) != '\0');
	return td;
}
