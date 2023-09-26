#include "ft.h"

void	modifyTime(struct s_f1 *f1, int index, int newTime)
{
	if (index >= 0)
	{
		f1[index].ctime = newTime;
	}
}
