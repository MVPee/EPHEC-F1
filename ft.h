#ifndef FT_H
# define FT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

typedef struct s_f1{
    int numero;
    int ctime;
    int time;
    int best;
    int laps;
    int sector;
} t_f1;

typedef struct{
    char name[50];
    int len;
} Race;

struct s_f1 *create_f1(int ac, int *list);
void	show_f1(struct s_f1 *f1, int size);
void modifyTime(struct s_f1 *f1, int index, int newTime);
int random_int(int min, int max);
void updateRaceData(struct s_f1 *f1);

#endif