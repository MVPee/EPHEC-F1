#include "ft.h"

int main(int ac, char **av)
{
    int list[] = {1, 2, 3, 4, 10, 11, 14, 16, 18, 20, 22, 23, 24, 27, 31, 44, 55, 63, 77, 81};
    int taille = sizeof(list) / sizeof(list[0]);
    show_f1(create_f1(taille, list));
    return 0;
}