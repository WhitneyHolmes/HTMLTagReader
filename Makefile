# Compile with gcc
COMPILER = gcc

# The C flags to pass to gcc
C_FLAGS = -std=c99 -g -Wall -Wshadow

ERR = $(Error is here!)

# link .o files to make an executable
htags1: src/htags1.o src/isIllegalCharacter.o src/isDuplicate.o src/clearTag.o
	$(COMPILER) $(C_FLAGS) src/htags1.o src/isIllegalCharacter.o src/isDuplicate.o src/clearTag.o -o htags1

# compile the '.o' files
htags1.o: src/htags1.c err
	$(COMPILER) $(C_FLAGS) -c src/htags1.c 

isIllegalCharacter.o: src/isIllegalCharacter.c err
	$(COMPILER) $(C_FLAGS) -c src/isIllegalCharacter.c

isDuplicate.o: src/isDuplicate.c err
	$(COMPILER) $(C_FLAGS) -c src/isDuplicate.c 

clearTag.o: src/clearTag.c err
	$(COMPILER) $(C_FLAGS) -c src/clearTag.c

# tests
testall: test0 test1 err

test0: htags1 err
	./htags1 data/inputs/input0 > data/outputs/output0
	diff data/expected/expected0 data/outputs/output0

test1: htags1 err
	./htags1 data/inputs/input1 > data/outputs/output1
	diff data/expected/expected1 data/outputs/output1

test2: htags1 err
	./htags1 data/inputs/input2 > data/outputs/output2

clean: err
	/bin/rm -f *.o htags1 data/outputs/*

# debug
debug: err
	ddd ./htags1 < data/inputs/input0 > data/outputs/output0

err:
	$(ERR)
	