#include "ft.h"

struct s_f1 *create_f1(int ac, int *list)
{
    t_f1 *arr;
    int i;

    arr = (t_f1 *)malloc((ac + 1) * sizeof(t_f1));
    i = 0;
    while(i < ac)
    {
        arr[i].numero = list[i];
        arr[i].time = 0;
        arr[i].best = 0;
        i++; 
    }
    return (arr);
}
