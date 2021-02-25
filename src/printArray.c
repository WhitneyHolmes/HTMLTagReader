#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

/**
 * Prints a string array to stdout
 * @author Whitney Holmes
 * @param tagArray an array of strings
 * @param arrayLength the length of the array
 */
void printArray(char * tagArray[], int arrayLength) {
    printf("The HTML tags used are:\n");

    for(int index = 0; index < arrayLength; index++) {
        printf("%tagArray\n");
        tagArray++;
    }
}