#include "main.h"


/**
 * _strlen - rado lstring dyalo
 * @s:ldyalo
 * Return: zido fih orado
 */


int _strlen(char *s)

{

	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);

}


/**
 * create_file - sawab milaf
 * @filename: smyat lmilaf li swab
 * @text_content: ktab ola rsal
 * Return: whad ola walo
 */


int create_file(const char *filename, char *text_content)

{

	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);

}
