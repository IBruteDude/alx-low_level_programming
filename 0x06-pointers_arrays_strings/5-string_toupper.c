char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{	
		if ('a' <= s[i] && s[i] <= 'z')
			s[i++] += 'A' - 'a';
			
	}
}
