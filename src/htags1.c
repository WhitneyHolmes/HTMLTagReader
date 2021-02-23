#include stdio.h
#include stdlib.h
#include "functions.h"

#define ROWS 100
#define COLS 10

int main(int argc, char const *argv[])
{
    char tagArray[ROWS][COLS];
    getHTMLTags(&argv[1], &tagArray);
    return 0;
}
