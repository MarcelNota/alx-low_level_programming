#include "main.h"
/**
* read_textfile - shows text file
* @filename: the file
* @letters: the letters
* Return: 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *dar;
ssize_t oli;
ssize_t esc;
ssize_t ler;
oli = open(filename, O_RDONLY);
if (oli == -1)
return (0);
dar = malloc(sizeof(char) * letters);
ler = read(oli, dar, letters);
esc = write(STDOUT_FILENO, dar, ler);
free(dar);
close(oli);
return (esc);
}