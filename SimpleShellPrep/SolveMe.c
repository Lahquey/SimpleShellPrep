/**
 * modif_my_char_var - Solve me 
 *
 * Return: nothing.
 */

void modif_my_char_var(char *cc, char ccc)
{
	*cc = 'A';
	ccc = 'l';
}
/**
 * main - Solve me
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	modif_my_char_var(p,c);
	return 0;
}

