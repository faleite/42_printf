# Tests

## putchar
```c
int	main(void)
{
	ft_putchar('k');
	return (0);
}
```

## putstr
```c
int	main(void)
{
	printf("len: %d", ft_putstr("Hello!"));
	return (0);
}
```

## putnbr
```c
# include <unistd.h>
# include <stdio.h>
int	main(void)
{
	int	n;

	n = 2147483647;
	printf("\n%d", ft_putnbr(n));
	/* ft_putnbr(2147483647); */
	/* ft_putnbr(-2147483647); */
	return (0);
}
```

## unsint
```c
# include <unistd.h>
# include <stdio.h>
int	main(void)
{
	unsigned int	n;

	n = 4294967295;
	printf("\n%d", ft_unsint(n));
	return (0);
}
```