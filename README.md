<p align="center">
  <img  src="https://ml.globenewswire.com/Resource/Download/a08e6c28-55be-44c8-8461-03544f094b38">
</p>


# Emulating the printf function (_printf).

`_printf`  This is a function, created to emulate the basic functions of the original `printf`.

This function prints to the standard output using a format string that includes instructions for mixing multiple strings into the final string to display on the screen.

## Prototype.
```c
int _printf(const char *format, ...)
```
## Supported format specifiers types.
### Specifiers: 

Types | Output
------------- | -------------
c| Prints a char.
s| Prints a string.
i| Prints an integer.
d| Prints a decimal.

### Naturally Special Characters
Types | Output
------------- | -------------
%| Prints a % .

#### Basic Examples:
```c
#include "main.h"
{
	_printf("%c\n", 'H');
	_printf("%s\n", "Holberton School!");
	return (0);
}
```
##### Output:
`H`
`Holberton School!`

```c
#include "main.h"
{
	_printf("%i\n", 2147483647);
	_printf("%i\n", -2147483647);
	return (0);
}
```
##### Output:
`2147483647`
`-2147483647`

```c
#include "main.h"
{
	_printf("%%");
	return (0);
}
```
##### Output:
`%`


### Compilation
Compiled with :  `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c (-o name)`

## Authors
| [<img src="https://avatars.githubusercontent.com/u/105649198?v=4" width=115><br><sub> Kevin Espinoza </sub>](https://github.com/KevinYeff) |  
| :---: |