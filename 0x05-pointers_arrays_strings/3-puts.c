#include "main.h"

/** 
 * _puts - prints string
 *
 * Returns 0: success
 */
void _puts(char *str);
	for(; *str != '\0'; str++)
	{
		_putchar(str);
	}
	
	_putchar('\n');
}
