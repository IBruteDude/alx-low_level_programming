#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char* argv[])
{
	char failed = 0, *res, *n1, *n2;
	int i, idx, s1, s2, x, y, prod, carry;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = argv[1];
	n2 = argv[2];
	for (i = 0; n1[i] != '\0'; i++)
		if (!isdigit(n1[i]))
			failed = 1;
	for (i = 0; n2[i] != '\0'; i++)
		if (!isdigit(n2[i]))
			failed = 1;
	s1 = strlen(n1);
	s2 = strlen(n2);
	res = malloc(s1 + s2 + 1);
	if (res == NULL)
		failed = 1;
	if (failed)
	{
		if (res != NULL)
			free(res);
		printf("Error\n");
		exit(98);
	}

	/* All safe */
	for (i = 0; i < s1 + s2; i++)
		res[i] = '0';
	res[s1 + s2] = '\0';
	
	/* All ready */
	idx = s1 + s2;
	carry = 0;
	for (x = 0; x < s1; x++)
	{
		for (y = 0; y < s2; y++)
		{
			idx = s1 - s2 - x - y - 1;
			prod = (n1[s1 - x - 1] - '0') * (n2[s2 - y - 1] - '0');
			res[idx] += (prod + carry) % 10; 
			carry = (prod + carry) / 10;
		}
	}
	res[0] += carry;
	if (res[0] == '0')
		memcpy(res, res + 1, s1 + s2);
	printf("%s\n", res);
	/* for (i = 0; i < s1 + s2; i++)
		printf("%i ", res[i] - '0');
	*/
	free(res);
	return (0);
}
