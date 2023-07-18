/**
 * print_alphabet - prints lowercased aphalbets
 *
 */

void print_alphabet(void);
int _putchar(char c);
void print_alphabet(void)
{
char aphbet[26] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
for (i = 0; i < 26; i++)
{
_putchar(aphbet[i]);
}
_putchar('\n');
}
