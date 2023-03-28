#include "logger.h"

#include <stdio.h>
#include <string.h>
#include <time.h>

FILE *log_init(char *filename) { FILE *new_file = fopen(filename, "wb+"); }