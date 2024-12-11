
#include <stdio.h> // Sadece karşılaştırma yapmak için
#include "ft_libftprintf.h" // ft_printf'i çağırmak için

int main(void)
{
    int result_ft;
    int result_std;

    // Test 1: Karakter ('c') testi
    result_ft = ft_printf("Karakter: %c\n", 'A');
    result_std = printf("Karakter: %c\n", 'A');
    printf("ft_printf: %d, printf: %d\n\n", result_ft, result_std);

    // Test 2: Dize ('s') testi
    result_ft = ft_printf("Dize: %s\n", "Merhaba Dünya");
    result_std = printf("Dize: %s\n", "Merhaba Dünya");
    printf("ft_printf: %d, printf: %d\n\n", result_ft, result_std);

    // Test 3: Tam sayı ('d' ve 'i') testi
    result_ft = ft_printf("Tam sayı: %d, %i\n", 42, -42);
    result_std = printf("Tam sayı: %d, %i\n", 42, -42);
    printf("ft_printf: %d, printf: %d\n\n", result_ft, result_std);

    // Test 4: İşaretsiz sayı ('u') testi
    result_ft = ft_printf("İşaretsiz: %u\n", 4294967295u);
    result_std = printf("İşaretsiz: %u\n", 4294967295u);
    printf("ft_printf: %d, printf: %d\n\n", result_ft, result_std);

    // Test 5: Hexadecimal ('x' ve 'X') testi
    result_ft = ft_printf("Hexadecimal küçük: %x, büyük: %X\n", 255, 255);
    result_std = printf("Hexadecimal küçük: %x, büyük: %X\n", 255, 255);
    printf("ft_printf: %d, printf: %d\n\n", result_ft, result_std);

    // Test 6: İşaretçi ('p') testi
    int var = 42;
    result_ft = ft_printf("İşaretçi: %p\n", &var);
    result_std = printf("İşaretçi: %p\n", &var);
    printf("ft_printf: %d, printf: %d\n\n", result_ft, result_std);

    // Test 7: Yüzde işareti ('%') testi
    result_ft = ft_printf("Yüzde: %%\n");
    result_std = printf("Yüzde: %%\n");
    printf("ft_printf: %d, printf: %d\n\n", result_ft, result_std);

    return 0;
}
