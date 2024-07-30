#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * premain - before main
 * __attribute__ - main
 * @constructor: var1
 */

void __attribute__((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

