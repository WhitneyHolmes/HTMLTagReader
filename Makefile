# Compile with gcc
COMPILER = gcc

# The C flags to pass to gcc
C_FLAGS = -std=c99 -g -Wall -Wextra -lm

help:
	@printf "available command:\n"
	@printf "	make help               (this command)\n"

# link .o files to make an executable
htags1: htags1.c
	$(COMPILER) $(C_FLAGS) -o htags1 htags1.c getHTMLTags.c isDuplicate.c isIllegalCharacter.c printArray.c

# compile the '.o' files
htags1.o: htags1.c
	$(COMPILER) $(C_FLAGS) -c htags1 htags1.c 

getHTMLTags.o: getHTMLTags.c 
	$(COMPILER) $(C_FLAGS) -c getHTMLTags getHTMLTags.c 

isDuplicate.o: isDuplicate.c 
	$(COMPILER) $(C_FLAGS) -c isDuplicate isDuplicate.c 

isIllegalCharacter.o: isIllegalCharacter.c 
	$(COMPILER) $(C_FLAGS) -c isIllegalCharacter isIllegalCharacter.c 

printArray.o: printArray.c 
	$(COMPILER) $(C_FLAGS) -c printArray printArray.c 