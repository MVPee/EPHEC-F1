#include "ft.h"

int do_sector(t_f1 *f1Array, int size, int stop)
{
	int i;
	int flag;

	i = 0;
	srand(time(NULL));
	while (i < size)
	{
		if(f1Array[i].time >= stop)
		{
			flag = 1;
			break;
		}
		modifyTime(f1Array, i, random_int(25, 45));
		i++;
	}
	show_f1(f1Array);

	printf("\n");
	sleep(1);
	return flag;
}

int	main(int ac, char **av)
{
	t_f1 *f1Array;
	int flag;
	int list[] = {1, 2, 3, 4, 10, 11, 14, 16, 18, 20, 22, 23, 24, 27, 31, 44,
		55, 63, 77, 81};
	int size = sizeof(list) / sizeof(list[0]);

	f1Array = create_f1(size, list);

	for(int i = 1; i <= 100; i++)
	{
		flag = do_sector(f1Array, size, 500);
		if(flag == 1)
			break;
	}

	free(f1Array);
	return (0);
}
