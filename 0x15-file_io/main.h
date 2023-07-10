#ifndef _MAIN_
#define _MAIN

#include <sys/types.h>
#include <sys/stat.h>
#include <fctl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const *filename, char *text_content);

#endif
