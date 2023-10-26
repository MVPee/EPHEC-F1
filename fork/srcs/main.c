#include "../includes/f1.h"

int	main(void)
{
	// init
	int shmid, cpid, shmkey = 420;

    initscr();
    start_color();
    init_pair(1,COLOR_MAGENTA, COLOR_BLACK);

	// shared memory
	shmid = shmget(shmkey, 20 * sizeof(f1), IPC_CREAT | 0666);
	f1 *f1_ptr = shmat(shmid, 0, 0);

    // init F1
	for (int i = 0; i < 20; i++)
		initF1(&f1_ptr[i], carIds[i]);

	for (int i = 0; i < 20; i++)
	{
		if ((cpid = fork()) == 0)
		{
			f1 child_f1;
			child_f1 = f1_ptr[i];

			srand48(time(0) + child_f1.id);
			for (int j = 0; j < 20; j++)
			{
				sleep(1);
				lapF1(&f1_ptr[i]);
			}
			exit(0);
		}
	}

    if(cpid != 0){
        halfdelay(5);
        for(int i = 0; i < 30; i++) {
            f1 * buffer = malloc(20 * sizeof(f1));
            memcpy(buffer, f1_ptr, 20 * sizeof(f1));
            bubble_sort(buffer, 20);
            printw("%d\n", i);
            display_scores(buffer, 20);

            getch();
            erase();
            refresh();
        }

        //shared memory
        shmctl(shmid, IPC_RMID, NULL);

        //display
        getch();
        endwin();
    }

    shmdt(f1_ptr);
    return (0);
}