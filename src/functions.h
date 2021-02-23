#ifndef FUNCTIONS_H
#define FUNCTIONS_H

void getHTMLTags(char * inputFilept, char * tagArray[]);

int isIllegalCharacter(char charInput);

int isDuplicate(char * tagArray[], int arrayLength);

void printArray(char * tagArray[], int arrayLength);

#endif