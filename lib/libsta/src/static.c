#include "static.h"
#include <stdio.h>
#include <string.h>

/**
 * static_lib_function
 * 
 * @param msg: The message to be printed
 * @return The length of the message
*/
int static_lib_function(char* msg)
{
    printf("Hello from static library that receives '%s' and returns '%ld'\n", msg, strlen(msg));
    return strlen(msg);
}
