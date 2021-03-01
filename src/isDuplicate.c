#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

/**
 * Compares an array of strings to itself to check for duplicates.
 * @author Whitney Holmes 3502092
 * @returns 0 if duplicate
 * @returns 1 if not duplicate
 */
int isDuplicate(char * tagArray[], int arrayLength) {
    int i;
    int j;

    for(i = 0; i < arrayLength; i++) {
        for(j = i + 1; j < arrayLength; j++) {
            if(strcmp(tagArray[i], tagArray[j]) == 0) {
                return 0; //If duplicate, return true
            }   
        }  
    }
    return 1; //Return false if distinct
}