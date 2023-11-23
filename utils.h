#define  _POSIX_C_SOURCE 200809L

#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include <stdlib.h> 
#include <errno.h> 
#include <sys/wait.h> 
#include <string.h>

char* get_tempdir(char* tempd);
char* duplicate_str(char* str);