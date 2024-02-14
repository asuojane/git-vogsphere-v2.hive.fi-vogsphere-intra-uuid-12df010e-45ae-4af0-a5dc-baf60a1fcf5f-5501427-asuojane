#include <stdio.h>

void ft_print_numbers(void);

int main() {
    ft_print_numbers();
    return 0;
}

void ft_print_numbers(void) {
    // Display digits on a single line in ascending order
    for (int i = 0; i <= 9; ++i) {
        printf("%d ", i);
    }
    printf("\n");
}

