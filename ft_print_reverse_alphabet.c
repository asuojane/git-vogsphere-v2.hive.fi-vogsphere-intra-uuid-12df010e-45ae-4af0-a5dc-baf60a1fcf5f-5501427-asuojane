#include <stdio.h>

void ft_print_alphabet_backward(void) {
    char letter = 'z';

    while (letter >= 'a') {
        printf("%c", letter);
        letter--;
    }

    printf("\n");
}

int main() {
    ft_print_alphabet_backward();
    return 0;
}



