#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 10 || n <= -10)
		ft_putnbr_fd(n / 10, fd);
	else if (n < 0)
		write(fd, "-", 1);
	if (n < 0)
		n = (n % 10) * -1;
	write(fd, &"0123456789"[n % 10], 1);
}
