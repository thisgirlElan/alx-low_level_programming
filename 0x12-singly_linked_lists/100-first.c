#include <stdio.h>

/**
 * before_main - Function executed before main()
 *
 * It's as a constructor and is automatically
 * executed before the main()
 */

void __attribute__((constructor)) before_main()
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
