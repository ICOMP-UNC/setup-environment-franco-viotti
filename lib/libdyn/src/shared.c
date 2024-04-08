#include "shared.h"
#include <stdio.h>
#include <string.h>

/**
 * shared_lib_function
 *
 * This function is defined in the shared library and
 *
 * @param msg: The message to be printed
 * @return The length of the message
*/
int shared_lib_function(char* msg)
{
    printf("Hello from dynamic library that receives '%s' and returns '%ld'\n", msg, strlen(msg));
    return strlen(msg);
}
