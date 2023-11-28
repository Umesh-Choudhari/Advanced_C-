#ifndef PRINT_H
#define PRINT_H
 
#ifdef __cplusplus
extern "C"
{
    #include <stdio.h>
    void displayFileNotFound();
}
#else
#include <stdio.h>
void displayFileNotFound();
#endif
 
#endif