/*
 * Name: Luka Kamidzorac
 * Student ID: 201914015
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {

    // define appropriate data to hold your answer
    char buffer[128];

    // must have exactly 2 command-line integer args: k1 and k2
    if (argc != 3) {
        return 0;
    }

    // process the command-line data using appropriate string functions
    char *end1 = NULL, *end2 = NULL;
    long k1 = strtol(argv[1], &end1, 10);
    long k2 = strtol(argv[2], &end2, 10);

    // validate that both are valid integers
    if (*argv[1] == '\0' || *argv[2] == '\0' || *end1 != '\0' || *end2 != '\0') {
        return 0;
    }

    // validate constraints
    if (k1 < 0 || k2 < 0 || k1 > k2) {
        return 0;
    }

    // Create array A of size k2
    size_t n = (size_t)k2;
    double *A = NULL;
    if (n > 0) {
        A = (double *)malloc(n * sizeof(double));
        if (A == NULL) {
            return 0;
        }
    }

    // Initialise A
    for (long i = 0; i < k2; i++) {
        if (i < k1) {
            A[i] = 2.0 * (double)i - 1.3;
        } else {
            A[i] = (double)i / 3.0 - 2.1;
        }
    }

    // Compute S = A[1]*A[2] + ... + A[k2-1]*A[k2]
    // with 0-based indexing: S = A[0]*A[1] + ... + A[k2-2]*A[k2-1]
    double S = 0.0;
    for (long i = 0; i < k2 - 1; i++) {
        S += A[i] * A[i + 1];
    }

    // put result in buffer
    snprintf(buffer, sizeof(buffer), "%f", S);

    printf("%s\n", buffer); // use only this single print statement in your submitted code

    free(A);
    return 0;
}
