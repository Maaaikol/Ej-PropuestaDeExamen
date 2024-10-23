#include <iostream>
#include <cmath>  // Para usar la función sqrt

int main() {
    int a, b, c;

    // Iteramos sobre los posibles valores de 'a' y 'b'
    for (a = 1; a <= 20; a++) {   // 'a' va desde 1 hasta 20
        for (b = a; b <= 20; b++) {   // 'b' va desde 'a' hasta 20
            // Calculamos 'c' usando la fórmula pitagórica
            double c_f = sqrt(a * a + b * b);  // c_f es el valor flotante de c

            // Verificamos si 'c' es un número entero
            if (c_f == static_cast<int>(c_f)) {
                c = static_cast<int>(c_f);  // Convertimos c_f a entero

                // Verificamos la condición del triángulo: a + b > c, a + c > b, b + c > a
                if (a + b > c && a + c > b && b + c > a) {
                    // Imprimimos el triple pitagórico
                    std::cout << "Triple pitagórico: " << a << " - " << b << " - " << c << std::endl;
                }
            }
        }
    }

    return 0;
}
