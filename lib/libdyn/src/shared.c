#include "shared.h"
#include <stdio.h>
#include <string.h>

int shared_lib_function(char* msg)
{
    printf("Hello from dynamic library that receives '%s' and returns '%ld'\n", msg, strlen(msg));
    return strlen(msg);
}