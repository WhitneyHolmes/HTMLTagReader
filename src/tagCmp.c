#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

#define COLS 10
/**
 * Compares two strings together, character by character
 * @author Whitney Holmes 3502092
 * @returns 0 if duplicate
 * @returns 1 if not duplicate
 */
int tagCmp(char * tag1, char * tag2) {
    int isDuplicate = 0;

    //Detirmine size
    int size1 = sizeof *tag1/sizeof *tag1[0];
    int size2 = sizeof *tag2/sizeof *tag2[0];

    //If the same size, loop checking each character
    if(size1 == size2) { 
        int i;
        for(i = 0; i < size1; i++) {
            if(*tag1[i] != *tag2[i]) { //If characters are NOT equal
                isDuplicate = 1;
                break;
            }
        }
    }

    return isDuplicate;
}