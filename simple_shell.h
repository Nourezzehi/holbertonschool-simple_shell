#ifndef HEADER_H
#define HEADER_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/wait.h>

#define LSH_TOK_DELIM " \t\r\n\a"

char *read_line(void);
char **parse_the_line(char *);
int execute_line(char **);

#endif
