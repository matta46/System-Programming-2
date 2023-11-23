#define _GNU_SOURCE

#include <stdio.h>
#include <string.h>
#include <linux/limits.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>


#include <sys/time.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#include "utils.h"

typedef struct file_entry 
{
    char* base_dir;
    char* file_path;
    int duplicate;
    struct stat* st;
    struct file_entry* next;
} 
fentry;

typedef struct tar_files_list {
    char* tar_file_base_dir;
    struct file_entry* head;
    struct file_entry* tail;
}files_list;

void add_file_to_list(files_list* list, char* filename);
files_list* get_all_files_in_dir(char *base_dir);
void print_file_list(files_list* list);
void cleanup_file_list(files_list* list);
void create_file_list(files_list* mlist, char* base_dir);

files_list* merge_file_lists(files_list *lists[], int n, char* new_dir);
void remove_dir(char *path);
