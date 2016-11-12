#include "ft_list.h"

/*
** Determines whether some data is in a given list.
*/

int		ft_lstin(t_list *list, void *data, int (*cmp)(void*, void*))
{
	return (ft_lstfind(list, data, cmp) != NULL);
}
