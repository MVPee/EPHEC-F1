#include "../includes/ft.h"

void	modifyTime(struct s_f1 *f1, int index, int newTime)
{
	if(f1[index].completed == true)
	{
		f1[index].ctime = 0;
		return;
	}
	if (index >= 0)
	{
		f1[index].ctime = newTime;
	}
}
