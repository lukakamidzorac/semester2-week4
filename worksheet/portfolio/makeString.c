/*
Name:
Student ID: 201914015
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {

    // define appropriate data to hold your answer
    // Max output length:
    // 10 args * 4 chars + 9 '-' + '\0' = 50
    char buffer[50];
    int i;

    buffer[0] = '\0';

    // process the command-line data using appropriate string functions
    for (i = 1; i < argc; i++) {
        strncat(buffer, argv[i], sizeof(buffer) - strlen(buffer) - 1);

        if (i < argc - 1) {
            strncat(buffer, "-", sizeof(buffer) - strlen(buffer) - 1);
        }
    }

    printf("%s\n", buffer); // use only this single print statement in your submitted code

    return 0;
}