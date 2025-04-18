/* Basic Memory Manipulation */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i = 0;
    char *message = "hello world";
    char *buffer = (char *)malloc(7);

    if(buffer == NULL)
        return 1;

    strncpy(buffer, message, 5);
    buffer[5] = '\n';
    buffer[6] = '\0';

    for(i = 0; i < 10; i++)
        printf("%s", buffer);

    free(buffer);
    return 0;
}

