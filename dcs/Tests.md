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

	n = -2147483648;
	printf("\n%d", ft_putnbr(n));
	/* ft_putnbr(2147483647); */
	/* ft_putnbr(-2147483648); */
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

## hexa
```c
int	main(void)
{
	ft_hexa(2147483647, HEXALOW);
	/* printf("\nLength: %d", ft_hexa(2147483647, HEXALOW)); */
	/* printf("\nLength: %d", ft_hexa(2147483647, HEXAHIG)); */
	return (0);
}
```

## adress
```c
int	main(void)
{
	char	*ptr = "Ok";

	/* ft_adress(2147483647); */
	/* ft_adress(0); */
	/* ft_adress(ptr); */
	printf("%p\n", ptr);
	printf("\nLength: %d", ft_adress(ptr));
	return (0);
}
```

## printf
```c
int	main(void) 
{	
	/* char	*ptr = "Hello"; */
	/* int	n; */
	/* int	nb; */
	
	/* ft_printf("String\n"); */
	/* ft_printf("Char: %c\n", 'C'); */
	/* ft_printf("String: %s\n", "Teste"); */
	/* ft_printf("Number: %d\n", -2147483647); */
	/* ft_printf("Unsigned Number: %u\n", 4294967295); */
	/* ft_printf("Hexa upper: %X\n", 4294967295); */
	/* ft_printf("Hexa lower: %x\n", 4294967295); */
	/* printf("Adress printf: %p\n%n", ptr, &n); */
	/* ft_printf("Adress printf: %p\n%n", ptr, &nb); */
	/* printf("len printf: %d\n", n); */
	/* ft_printf("len ft_printf: %d\n", n); */
	ft_printf("String: %s\nChar: %c\nNumber: %d\n", "Hello", 'H', -2147483647);
	return(0);
}
```
