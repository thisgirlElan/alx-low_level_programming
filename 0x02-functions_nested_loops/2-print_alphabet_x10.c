#include "main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet,
* in lowercase, followed by a new line
*/
void print_alphabet_x10(void)
{
int count = 0;
int alphabet;

while (count < 10)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

count++;
_putchar('\n');
}

}
