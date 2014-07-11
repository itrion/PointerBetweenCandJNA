#ifndef EXPERIMENT_LIBRARY_H
#define EXPERIMENT_LIBRARY_H

typedef void* (*allocateCallback)(int size);
extern void takesAPointerAndStoreAString(void* pointer);
extern void takesAPointerToPointerAndStoreAString(void** pointerToPointer);
#endif
