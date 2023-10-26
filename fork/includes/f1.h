#ifndef F1_H
# define F1_H

# include <ncurses.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/ipc.h>
# include <sys/shm.h>
# include <sys/types.h>
# include <time.h>
# include <unistd.h>

typedef struct
{
	int		id;
	float s1, s2, s3;
	float best_s1, best_s2, best_s3;
	int has_best_s1, has_best_s2, has_best_s3;
	float	best_lap;
	float	total_time;
	bool	state_pitstop;
	bool	state_crash;
}			f1;

static int	carIds[] = {44, 63, 1, 11, 55, 16, 4, 3, 14, 31, 10, 22, 5, 18, 6,
		23, 77, 24, 47, 9};

void		initF1(f1 *ptr, int carId);
void lapF1(f1 *ptr);
void display_scores(f1 *circuit, int car_count);
void bubble_sort(f1 *list, int car_count);

#endif