// Ejercicio 1:

// Objetivo: implementar area, perimetro, nuevaBase y nuevaAltura de un
// rectangulo usando funciones sueltas que reciben base y altura por
// separado.

// Salida esperada:
// Area: 50
// Perimetro: 30
// Despues de escalar x2 -> base: 20, altura: 10
//
// Compilar:  g++ -std=c++20 -Wall -Wextra -g ejercicio1_funciones_sueltas.cpp -o bin/ejercicio1
// Ejecutar:  ./bin/ejercicio1

#include <iostream>
using namespace std;

double area(double base, double altura) {
    // TODO: retorna base * altura
    return base*altura;
}

double perimetro(double base, double altura) {
    // TODO: retorna 2 * (base + altura)
    return 2 * (base + altura);
}

double nuevaBase(double base, double factor) {
    // TODO: retorna base * factor
    return base * factor;
}

double nuevaAltura(double altura, double factor) {
    // TODO: retorna altura * factor
    return altura * factor;
}

int main() {
    double base = 10.0;
    double altura = 5.0;

    cout << "Area: " << area(base, altura) << endl;
    cout << "Perimetro: " << perimetro(base, altura) << endl;

    base = nuevaBase(base, 2.0);
    altura = nuevaAltura(altura, 2.0);
    cout << "Despues de escalar x2 -> base: " << base << ", altura: " << altura << endl;

    return 0;
}
