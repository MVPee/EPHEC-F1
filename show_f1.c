#include "ft.h"

void	show_f1(struct s_f1 *f1)
{
	int i;

	i = 0;
	printf("\n");
	while (f1[i].numero)
	{
		printf("Numéro : %d\t | Time : %d\t | Best : %d\t\t\t", f1[i].numero,
			f1[i].time[0], f1[i].best);
		printf("Numéro : %d\t | Time : %d\t | Best : %d\n", f1[i + 1].numero,
			f1[i + 1].time[0], f1[i + 1].best);
		i += 2;
	}
	printf("\n-------------------------------------------------------------------------------------------------------------\n");
}
