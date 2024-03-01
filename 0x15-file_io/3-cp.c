#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buffer(char *file);
void close_file(int fd);

/**
* creates_buffer - buffer
* @file: file
* Return: 0
*/

char *creates_buffer(char *file)
{

char *boo;

boo = malloc(sizeof(char) * 1024);

if (boo == NULL)
{

dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (boo);
}
/**
* close_file - for ending
* @fd: description
*/
void close_file(int alu)
{
int z;
z = close(alu);
if (z == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
* main - the main
* @argc: args
* @argv: args
* Return: nothing
* Description: it shows all codees
int main(int argc, char *argv[])
{

int org, fuu, ler, esc;
char *roar;
if (argc != 3)
{

dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
roar = create_buffer(argv[2]);

org = open(argv[1], O_RDONLY);

ler = read(org, roar, 1024);

fuu = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {

if (org == -1 || ler == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(roar);
exit(98);
}
esc = write(to, roar, ler);
if (fuu == -1 || esc == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(roar);
exit(99);
}
ler = read(org, roar, 1024);
fuu = open(argv[2], O_WRONLY | O_APPEND);
} while (ler > 0);
free(roar);

close_file(org);

close_file(fuu);

return (0);
}