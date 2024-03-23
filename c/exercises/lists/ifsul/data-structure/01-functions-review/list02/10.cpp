#include <stdio.h>

void triangle_type(int X, int Y, int Z) {
    if(X < (Y + Z) || Y < (X + Z) || Z < (Y + X))
        printf("\nNão é um triângulo");
    
    if((X == Y) && (Y == Z) && (Z == X))
        printf("\nTriângulo Equilátero");

}

int main() {
    triangle_type(1, 2, 3);
    return 0;
}