#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i, j, count = 0;

    for (i = 2; i < n; i++) {
        count = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
            printf("%d\t", i);
    }

    return 0;
}