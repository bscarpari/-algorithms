#include <stdio.h>

// OBS.: 
int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);
}

int main() {
    int result = sum(3);
    printf("%i", result);
    return 0;
}