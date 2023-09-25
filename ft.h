#ifndef FT_H
# define FT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct s_f1{
    int numero;
    int time;
    int best_time;
} t_f1;

typedef struct{
    char name[50];
    int len;
} Race;

struct s_f1 *create_f1(int ac, int *list);
void	show_f1(struct s_f1 *f1);

#endif