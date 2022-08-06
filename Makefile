stack: StackPush.o StackPop.o StackPeek.o IsEmpty.o GetLength.o freeStack.o printStack.o menu.o main.o
	gcc -Wall -std=c99 StackPush.o StackPop.o StackPeek.o IsEmpty.o GetLength.o freeStack.o printStack.o menu.o main.o -o stack

StackPush.o: StackPush.c header.h
	gcc -Wall -std=c99 -c StackPush.c

StackPop.o: StackPop.c header.h
	gcc -Wall -std=c99 -c StackPop.c

StackPeek.o: StackPeek.c header.h
	gcc -Wall -std=c99 -c StackPeek.c

IsEmpty.o: IsEmpty.c header.h
	gcc -Wall -std=c99 -c IsEmpty.c

GetLength.o: GetLength.c header.h
	gcc -Wall -std=c99 -c GetLength.c

freeStack.o: freeStack.c header.h
	gcc -Wall -std=c99 -c freeStack.c

printStack.o: printStack.c header.h
	gcc -Wall -std=c99 -c printStack.c

menu.o: menu.c header.h
	gcc -Wall -std=c99 -c menu.c

main.o: main.c header.h
	gcc -Wall -std=c99 -c main.c

clean:
	rm *.o stack
