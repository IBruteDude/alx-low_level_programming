/**
 * print_name - passes a string as an argument to a function
 * @name: passed string
 * @f: applied function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
