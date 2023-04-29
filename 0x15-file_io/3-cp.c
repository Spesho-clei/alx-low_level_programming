#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUF_SIZE 1024
/**
 * print_usage_and_exit - function to print usageand exit
 * Return: exit with 97 if argc is incorrect
 */
void print_usage_and_exit(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
 * print_read_error_and_exit - function to read error and exit
 * @filename: file to read
 * Return: exit with 98 if file_from does not exist or you cannot read
 */
void print_read_error_and_exit(const char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}
/**
 * print_write_error_and_exit - function to write error and exit
 * @filename: file to write
 * Return: 99 if you can not create or if write to file_to fails
 */
void print_write_error_and_exit(const char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}
/**
 * print_close_error_and_exit - function to close error and exit
 * @fd: int
 * Return: 100 if you can not close a file descriptor
 */
void print_close_error_and_exit(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *filename_from;
	char *filename_to;
	int fd_from;
	int fd_to;
	char buf[BUF_SIZE];
	ssize_t num_read;

	if (argc != 3)
	{
		print_usage_and_exit();
	}
	filename_from = argv[1];
	filename_to = argv[2];
	fd_from = open(filename_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_read_error_and_exit(filename_from);
	}
	fd_to = open(filename_to, O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		print_write_error_and_exit(filename_to);
	}
while ((num_read = read(fd_from, buf, BUF_SIZE)) > 0)
{
	if (write(fd_to, buf, num_read) != num_read)
	{
		print_write_error_and_exit(filename_to);
	}
}
if (num_read == -1)
{
	print_read_error_and_exit(filename_from);
}
if (close(fd_from) == -1)
{
	print_close_error_and_exit(fd_from);
}
if (close(fd_to) == -1)
{
	print_close_error_and_exit(fd_to);
}
return (0);
}
