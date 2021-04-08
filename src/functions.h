#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#define COLS 20
#define ROWS 100

int isIllegalCharacter(char charInput);

int isDuplicate(char tagArray[][COLS +1], int numberOfTags);

int clearTag(char * tag, int length);

#endif