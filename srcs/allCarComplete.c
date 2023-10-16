#include "../includes/ft.h"

bool allCarComplete(struct s_f1 *f1, int size)
{
    bool allCarsCompleted = true;
    for (int i = 0; i < size; i++)
    {
        if (!f1[i].completed)
        {
            allCarsCompleted = false;
            break;
        }
    }
    return allCarsCompleted;
}