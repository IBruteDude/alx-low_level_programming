void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);
	if (p == (void *)0)
		exit(98);
	return (p);
}
