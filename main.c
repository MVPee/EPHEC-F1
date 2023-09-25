#include "ft.h"

int main(int ac, char **av)
{
    t_f1 *f1Array;
    int list[] = {1, 2, 3, 4, 10, 11, 14, 16, 18, 20, 22, 23, 24, 27, 31, 44, 55, 63, 77, 81};
    int size = sizeof(list) / sizeof(list[0]);
    f1Array = create_f1(size, list);
    modifyTime(f1Array, 0, 50);
    show_f1(f1Array);
    free(f1Array);
    return 0;
}
