#include "ExperimentLibrary.h"
#include <stdio.h>

void funtionTakesAPointerAsParameter(){
	printf("Pass pointer as parameter\n");
	void* pointer = NULL;
	takesAPointerAndStoreAString(pointer);
	printf("CLIENT: pointer value is: %s\n", pointer);
}

void funtionTakesAPointerToPointerAsParameter(){
	printf("Pass pointer to pointer as parameter\n");
	void* pointerToPointer = NULL;
	takesAPointerToPointerAndStoreAString(&pointerToPointer);
	printf("CLIENT: pointer value is: %s\n", pointerToPointer);
}

int main(int argc, char const *argv[]){
	funtionTakesAPointerAsParameter();
	printf("\n\n");
	funtionTakesAPointerToPointerAsParameter();
	return 0;
}

