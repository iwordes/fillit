#include "ft_io.h"

void	ft_putaddr_fd(const void *address, int fd)
{
	ft_putstr("0x");
	ft_putuint_base_fd((const unsigned long long*)address);
}
