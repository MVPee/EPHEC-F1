#include "ft.h"

void	show_f1(struct s_f1 *f1, int size)
{
	int i;
	struct s_f1 previousCar;

	qsort(f1, size, sizeof(struct s_f1), cmp_time);

	i = 0;
	while (f1[i].numero)
	{
		if(f1[i].completed == false)
			f1[i].diff = (i == 0) ? 0 : (f1[i].time - f1[i - 1].time);
		int minutes = f1[i].time / 60;
        int seconds = f1[i].time % 60;
		if(allCarComplete(f1, size))
		{
			if(i == 0)
				printf("1\tN° : %d\t| Time : %d.%dm\t| Time (Sector): -\t| Best : %ds\t| Laps : %d (S%d)\n", f1[i].numero, minutes, seconds, f1[i].best, f1[i].laps, f1[i].sector);
			else if(i == 1)
				printf("2\tN° : %d\t| Time : %d.%dm\t| Time (Sector): -\t| Best : %ds\t| Laps : %d (S%d)\t-%d.00s\n", f1[i].numero, minutes, seconds, f1[i].best, f1[i].laps, f1[i].sector, f1[i].diff);
			else if(i == 2)
				printf("3\tN° : %d\t| Time : %d.%dm\t| Time (Sector): -\t| Best : %ds\t| Laps : %d (S%d)\t-%d.00s\n", f1[i].numero, minutes, seconds, f1[i].best, f1[i].laps, f1[i].sector, f1[i].diff);
			else
				printf("\tN° : %d\t| Time : %d.%dm\t| Time (Sector): -\t| Best : %ds\t| Laps : %d (S%d)\t-%d.00s\n", f1[i].numero, minutes, seconds, f1[i].best, f1[i].laps, f1[i].sector, f1[i].diff);
		}
		else
		{
			if(i == 0)
				printf("1\tN° : %d\t| Time : %d.%dm\t| Time (Sector): %ds\t| Best : %ds\t| Laps : %d (S%d)\n", f1[i].numero, minutes, seconds, f1[i].ctime, f1[i].best, f1[i].laps, f1[i].sector);
			else if(i == 1)
				printf("2\tN° : %d\t| Time : %d.%dm\t| Time (Sector): %ds\t| Best : %ds\t| Laps : %d (S%d)\t-%d.00s\n", f1[i].numero, minutes, seconds, f1[i].ctime, f1[i].best, f1[i].laps, f1[i].sector, f1[i].diff);
			else if(i == 2)
				printf("3\tN° : %d\t| Time : %d.%dm\t| Time (Sector): %ds\t| Best : %ds\t| Laps : %d (S%d)\t-%d.00s\n", f1[i].numero, minutes, seconds, f1[i].ctime, f1[i].best, f1[i].laps, f1[i].sector, f1[i].diff);
			else
				printf("\tN° : %d\t| Time : %d.%dm\t| Time (Sector): %ds\t| Best : %ds\t| Laps : %d (S%d)\t-%d.00s\n", f1[i].numero, minutes, seconds, f1[i].ctime, f1[i].best, f1[i].laps, f1[i].sector, f1[i].diff);
		}
		i++;
	}
}
