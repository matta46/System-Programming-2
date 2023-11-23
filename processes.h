#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include <stdlib.h> 
#include <errno.h> 
#include <sys/wait.h> 

//  CITS2002 Project 2 2020
//  Name(s):             Aryan Matta
//  Student number(s):   22780982

int expand_tar(char* tar_filename,char* target_dir);

int create_tar(char* tar_filename,char* target_dir);
