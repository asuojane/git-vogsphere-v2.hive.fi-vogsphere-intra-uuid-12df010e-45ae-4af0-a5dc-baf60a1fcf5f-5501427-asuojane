#include <stdio.h>

void ft_is_negative(int n) {
    if (n < 0) {
        printf("N\n");
    } else {
        printf("P\n");
    }
}

int main() {
    // Example usage:
    ft_is_negative(-5); // Output: N
    ft_is_negative(0);  // Output: P
    ft_is_negative(7);  // Output: P

    return 0;
}


