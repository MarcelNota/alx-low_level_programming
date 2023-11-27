#include "main.h"
/**
* read_textfile - shows text file
* @filename: the file
* @letters: the letters
* Return: 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t a;
ssize_t l;
ssize_t e;
a = open(filename, O_RDONLY);
if (a == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
e = read(a, buffer, letters);
l = write(STDOUT_FILENO, buffer, e);
free(buffer);
close(a);
return (l);
}