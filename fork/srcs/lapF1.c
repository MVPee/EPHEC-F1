#include "../includes/f1.h"

float genTime(float lower, float upper)
{
    return (lower + (drand48() * (upper - lower)));
}

void lapF1(f1 *ptr)
{
    //TODO: pit stop / crash all cars pit at same time, no crashing implemented
    float lap;
 
    ptr->s1 = genTime(25,45);
    ptr->s2 = genTime(25,45);
    ptr->s3 = genTime(25,45);
    lap = ptr->s1 + ptr->s2 + ptr->s3;
    

    if(ptr->s1 < ptr->best_s1)ptr->best_s1 = ptr->s1;
    if(ptr->s2 < ptr->best_s2)ptr->best_s2 = ptr->s2;
    if(ptr->s3 < ptr->best_s3)ptr->best_s3 = ptr->s3;
    if(lap < ptr->best_lap)ptr->best_lap = lap;
    ptr->total_time = ptr->total_time + lap;
}
