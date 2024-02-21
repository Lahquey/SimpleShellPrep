/**
 * main - you cannot modify a
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[5];
	int b ; 
	int c[5];

	a = 0; /* nope*/
	a = &b; /*nope*/
	a = c; /*nope*/
	return 0;
}

