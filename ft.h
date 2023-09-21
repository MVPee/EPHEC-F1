#ifndef FT_H
# define FT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
    char pilote[50];
    int numero;
} F1;

typedef struct{
    char name[50];
    int len;
} Race;

#endif