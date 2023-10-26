#include "../includes/f1.h"

void bubble_sort(f1 *list, int car_count){
    //TODO: optimise
    f1 buffer;
    int count, count2;

    for(count = 0; count < car_count; count++){
        for(count2 = 0; count2 < car_count; count2++){
            if(list[count2].best_lap > list[count].best_lap){
                buffer = list[count];
                list[count] = list[count2];
                list[count2] = buffer;
            }
        }
    }
}