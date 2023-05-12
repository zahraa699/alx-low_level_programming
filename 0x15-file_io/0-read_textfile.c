#include "main.h"

/**
 * read_textfile - this function read text from f and printed it
 * @filename: name of file to read
 * @letters: number of bytes in file
 *
 * Description: this func. read text and printed it
 *
 * Return:  number of bytes that readed and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	bytes = read(f, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(f);
	return (bytes);
}
