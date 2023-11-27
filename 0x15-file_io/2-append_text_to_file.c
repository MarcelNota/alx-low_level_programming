#include "main.h"

/**
 * append_text_to_file - puts text
 * @filename: the file
 * @text_content: content
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
int abr, esc, dar = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (dar = 0; text_content[dar];)
dar++;
}
abr = open(filename, O_WRONLY | O_APPEND);
esc = write(abr, text_content, abr);
if (abr == -1 || esc == -1)
return (-1);
close(abr);
return (1);
}
