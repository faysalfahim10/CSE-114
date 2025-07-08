#include <stdio.h>
#include <math.h>

int main() {
    int num;
    scanf("%d", &num);

    for (int i = 2; i <= num; i++) {
        int count = 0;

        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                count++;
                break;
            }
        }

        if (count == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

