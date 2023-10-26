#include "../includes/f1.h"

void initF1(f1 *ptr, int carId)
{
    ptr->id = carId;
    ptr->best_s1 = 45;
    ptr->best_s2 = 45;
    ptr->best_s3 = 45;
    ptr->best_lap = 45 * 3;
    ptr->total_time = 0;
    ptr->state_pitstop = false;
    ptr->state_crash = false;
}