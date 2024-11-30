#include "ft_printf.h"
#include <stdio.h> // in order to test with the standard printf

int	main(void)
{
    int len1, len2;

    // Test: Character specifier
    len1 = ft_printf("Character: %c\n", 'A');
    len2 = printf("Character: %c\n", 'A');
    printf("Lengths -> ft_printf: %d, printf: %d\n\n", len1, len2);

    // Test: String specifier
    len1 = ft_printf("String: %s\n", "Hello, 42!");
    len2 = printf("String: %s\n", "Hello, 42!");
    printf("Lengths -> ft_printf: %d, printf: %d\n\n", len1, len2);

    // Test: Pointer specifier
    int x = 42;
    len1 = ft_printf("Pointer: %p\n", &x);
    len2 = printf("Pointer: %p\n", &x);
    printf("Lengths -> ft_printf: %d, printf: %d\n\n", len1, len2);

    // Test: Integer specifiers
    len1 = ft_printf("Integer: %d, Negative: %i\n", 123, -123);
    len2 = printf("Integer: %d, Negative: %i\n", 123, -123);
    printf("Lengths -> ft_printf: %d, printf: %d\n\n", len1, len2);

    // Test: Unsigned specifier
    len1 = ft_printf("Unsigned: %u\n", 1234567890);
    len2 = printf("Unsigned: %u\n", 1234567890);
    printf("Lengths -> ft_printf: %d, printf: %d\n\n", len1, len2);

    // Test: Hexadecimal specifiers
    len1 = ft_printf("Hex lowercase: %x, Hex uppercase: %X\n", 255, 255);
    len2 = printf("Hex lowercase: %x, Hex uppercase: %X\n", 255, 255);
    printf("Lengths -> ft_printf: %d, printf: %d\n\n", len1, len2);

    // Test: Percent sign
    len1 = ft_printf("Percent: %%\n");
    len2 = printf("Percent: %%\n");
    printf("Lengths -> ft_printf: %d, printf: %d\n\n", len1, len2);

    // Edge cases
    len1 = ft_printf("Empty string: '%s'\n", "");
    len2 = printf("Empty string: '%s'\n", "");
    printf("Lengths -> ft_printf: %d, printf: %d\n\n", len1, len2);

    len1 = ft_printf("Null pointer: %p\n", NULL);
    len2 = printf("Null pointer: %p\n", NULL);
    printf("Lengths -> ft_printf: %d, printf: %d\n\n", len1, len2);

    return 0;
}
