#include <stdio.h>
#include <string.h>

int main() {
    char input[256];

    printf("Enter text to convert to binary (Ctrl+D to end):\n");

    while (fgets(input, sizeof(input), stdin) != NULL) {
        size_t len = strlen(input);
        for (size_t i = 0; i < len; i++) {
            char c = input[i];
            for (int j = 7; j >= 0; j--) {
                putchar((c & (1 << j)) ? '1' : '0');
            }
            putchar(' '); // Add space between bytes for readability
        }
        putchar('\n');
    }

    return 0;
}
