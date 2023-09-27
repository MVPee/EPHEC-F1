#include "ft.h"

int cmp_time(const void *a, const void *b)
{
    const struct s_f1 *f1A = (const struct s_f1 *)a;
    const struct s_f1 *f1B = (const struct s_f1 *)b;
    return (f1A->time - f1B->time);
}
