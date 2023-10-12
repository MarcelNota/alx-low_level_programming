#include "main.h"
/*
 @c: is the parameter
turns lowercase characteres into uppercase
  */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
