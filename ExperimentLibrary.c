#include "ExperimentLibrary.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

const char* MESSAGE_TO_STORE = "lib put this value in pointer";

void takesAPointerAndStoreAString(void* pointer){
	pointer = malloc(sizeof(char) * 128);
	printf("LIB: allocated memory for %d bytes\n", 128);
	strcpy(pointer, MESSAGE_TO_STORE);
	printf("LIB: pointer value is: \"%s\"\n", pointer);
}

void* getPointerContainingAString(){
	void* pointer = malloc(sizeof(char) * 128);
	printf("LIB: allocated memory for %d bytes\n", 128);
	strcpy(pointer, MESSAGE_TO_STORE);
	printf("LIB: pointer value is: \"%s\"\n", pointer);
	return pointer;
}

void takesAPointerToPointerAndStoreAString(void** pointerToPointer){
	void* pointer = malloc(sizeof(char) * 128);
	printf("LIB: allocated memory for %d bytes\n", 128);
	*pointerToPointer = pointer;
	strcpy(*pointerToPointer, MESSAGE_TO_STORE);
	printf("LIB: pointer value is: \"%s\"\n", *pointerToPointer);
}