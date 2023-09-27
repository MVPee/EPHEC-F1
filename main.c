#include "ft.h"

bool do_sector(t_f1 *f1Array, int size)
{
	int finish;
    srand(time(NULL));
    for (int i = 0; i < size; i++)
        modifyTime(f1Array, i, random_int(25, 45));
    updateRaceData(f1Array);
    show_f1(f1Array, size);
	finish = allCarComplete(f1Array, size);
    sleep(1);
	return finish;
}

int main(int ac, char **av)
{
    t_f1 *f1Array;
    int list[] = {1, 2, 3, 4, 10, 11, 14, 16, 18, 20, 22, 23, 24, 27, 31, 44,
                  55, 63, 77, 81};
    int size = sizeof(list) / sizeof(list[0]);
	int finish = false;
    f1Array = create_f1(size, list);

    while (!finish)
    {
        system("clear");
        finish = do_sector(f1Array, size);
    }

    free(f1Array);
    return (0);
}