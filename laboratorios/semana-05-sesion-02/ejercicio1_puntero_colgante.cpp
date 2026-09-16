#include <iostream>

// TODO: predice antes de compilar. ¿que advertencia esperas que de
// el compilador sobre esta funcion?

// RESPUESTA: El compilador advertirá que se está devolviendo la dirección 
// de una variable local. Al salir de la función, esa memoria se libera 
// por lo que el puntero quedará apuntando a la nada osea el puntero colgante
int* obtenerLecturaInsegura(int valorSensor) {
    int lectura = valorSensor * 2;
    return &lectura;
}

int main() {
    int* resultado = obtenerLecturaInsegura(10);
    std::cout << "Lectura (puntero colgante): " << *resultado << std::endl;
    return 0;
}
