#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);

    if (num <= 1) {
        printf("Number is not Prime\n");
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            count++;
            break;
        }
    }

    if (count == 0) {
        printf("Number is Prime\n");
    }
    else {
        printf("Number is not Prime\n");
    }

    return 0;
}
