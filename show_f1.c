#include "ft.h"

void	show_f1(struct s_f1 *f1)
{
	int i;

	i = 0;
	while (f1[i].numero)
	{
		if(f1[i].sector == 0 && f1[i].laps == 0)
			f1[i].best = f1[i].ctime;
		f1[i].sector++;
		if(f1[i].sector == 4)
		{
			f1[i].sector = 1;
			f1[i].laps++;
		}
		f1[i].time += f1[i].ctime;
		if(f1[i].ctime < f1[i].best)
			f1[i].best = f1[i].ctime;
		printf("N° : %d\t| Time : %ds\t| Time (Sector): %ds\t| Best : %ds\t| Laps : %d\t| Sector : %d\n", f1[i].numero, f1[i].time, f1[i].ctime, f1[i].best, f1[i].laps, f1[i].sector);
		i++;
	}
}
