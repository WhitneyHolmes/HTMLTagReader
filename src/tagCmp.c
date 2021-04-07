#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

#define COLS 10
#define ROWS 10
/**
 * Compares two strings together, character by character
 * @author Whitney Holmes 3502092
 * @returns 0 if duplicate
 * @returns 1 if not duplicate
 */
int tagCmp(char tag1[ROWS][COLS + 1], char tag2[ROWS][COLS + 1]) {
    //printf("\tTag Compare:\n");
    int isDuplicate = 0;

    char char1;
    char char2;

    //Detirmine size
    int size1 = sizeof tag1[0] / sizeof tag1[0][0];
    int size2 = sizeof tag2[0] / sizeof tag2[0][0];

    //printf("size1 = %d, size2 = %d\n", size1, size2);

    //If the same size, loop checking each character
    if(size1 == size2) { 
        int i;
        int j;
        for(i = 0; i < size1; i++) {
            for(j = 0; j < COLS + 1; j++) {
                if(tag1[i][j] != tag2[i][j]) { //If characters are NOT equal
                    //printf("\t\tTag1[%d][%d] = %c, Tag2[%d][%d] = %c\n", i, j, tag1[i][j], i, j, tag2[i][j]);
                    isDuplicate = 1;
                    break;
                }
            }
        }
    }

    return isDuplicate;
}