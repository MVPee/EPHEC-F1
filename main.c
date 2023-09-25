#include "ft.h"

int main(int ac, char **av)
{
    int i;
    t_f1 *f1Array;

    i = 0;
    int list[] = {1, 2, 3, 4, 10, 11, 14, 16, 18, 20, 22, 23, 24, 27, 31, 44, 55, 63, 77, 81};
    int size = sizeof(list) / sizeof(list[0]);
    f1Array = create_f1(size, list);
    while(i < size)
    {
        modifyTime(f1Array, i, random_int(25, 45));
        show_f1(f1Array);
        i++;
    }
    free(f1Array);
    return 0;
}
