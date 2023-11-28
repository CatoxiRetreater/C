#include <stdio.h>

int main() {
    int days = 1000;
    int years = days / 365;
    int months = (days % 365) / 30;
    int remainingDays = (days % 365) % 30;

    printf("%d years %d months %d days", years, months, remainingDays);

    return 0;
}
