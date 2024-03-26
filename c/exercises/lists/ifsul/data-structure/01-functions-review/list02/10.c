#include <stdio.h>

void triangle_type(int X, int Y, int Z) {    
    if(X > (Y + Z) || Y > (X + Z) || Z > (Y + X)) {
        printf("\nNao e um triangulo");
        return;
    }
    
    if((X == Y) && (Y == Z)) {
        printf("\nTriangulo Equilatero");
        return;
    }

    if((X == Y) || (Y == Z) || (Z == X)) {
        printf("\nTriangulo Isosceles");
        return;
    }

    if((X != Y) && (Y != Z) && (Z != X)) {
        printf("\nTriangulo Escaleno");
        return;
    }
}

int main() {
    printf("\nExemplos de inputs para cada tipo de triângulo:");
    triangle_type(1, 1, 10);  
    triangle_type(3, 3, 3);   
    triangle_type(3, 4, 4);   
    triangle_type(2, 3, 4);   
    return 0;
}