#include "main.h"
/**
* read_textfile - shows text file
* @filename: the file
* @letters: the letters
* Return: 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t a, l, e;
char *buffer;

if (filename == NULL)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer ==  NULL)
return (0);

a = open(filename, O_RDONLY);
l = read(a, buffer, letters);
e = write(STDOUT_FILENO, buffer, l);

if (a == -1 || l == -1 || e == -1 || e != l)
{
free(buffer);
return (0);
}
free(buffer);
close(a);
return (e);

}
