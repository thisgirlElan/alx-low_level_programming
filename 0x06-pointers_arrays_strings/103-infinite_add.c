#include "main.h"
#include <string.h>

/**
* infinite_add - adds two numbers
* @n1: first integer
* @n2: integer two
* @r: buffer for storing result
* @size_r: buffer size
* Return: buffer (r)
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);
int i, j, k = 0, carry = 0;
    
for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
{
int d1 = (i >= 0) ? (n1[i] - '0') : 0;
int d2 = (j >= 0) ? (n2[j] - '0') : 0;
int sum = d1 + d2 + carry;
        
if (k >= size_r - 1 || (sum >= 10 && k >= size_r - 2))
{
return (0);
}
        
r[k++] = sum % 10 + '0';
carry = sum / 10;
}
    
if (carry && k < size_r - 1)
{
r[k++] = carry + '0';
}
    
r[k] = '\0';
    
for (i = 0, j = k - 1; i < j; i++, j--)
{
char temp = r[i];
r[i] = r[j];
r[j] = temp;
}

return (r);
}
