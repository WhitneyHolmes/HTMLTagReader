#include stdio.h
#include stdlib.h

void printArray(char * tagArray[], int arrayLength) {
    printf("The HTML tags used are:\n");

    for(int index = 0; index < arrayLength; index++) {
        printf("%tagArray\n");
        tagArray++;
    }
}