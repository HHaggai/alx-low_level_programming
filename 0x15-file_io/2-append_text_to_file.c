#include "main.h"

/**
 * append_text_to_file - Apends txt at end of a file.
 * @filename: A pointr to the nam of the fil.
 * @text_content: The str to add to end of the fil.
 *
 * Return: If the funct fails or filnam is NULL - -1.
 *         If the fil does not exst the user lacks write permiss - -1.
 *         Otherwyse - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

