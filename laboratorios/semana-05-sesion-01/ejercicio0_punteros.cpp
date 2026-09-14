#include <iostream>
using namespace std;

int main(){
    int numero = 10;
    int *ptr_puntero = &numero;
    std::cout << "direccion de memoria de numero: " << ptr_puntero << std::endl;
    std::cout << "valor de memoria desde puntero: " << *ptr_puntero << std::endl;
    std::cout << "valor de memoria desde variable: " << numero << std::endl;

    int notas[5] = {80, 90, 60, 50, 71};

    int *ptr_notas = notas;
    std::cout << "direccion de memoria: " << ptr_notas << std::endl;
    std::cout << "valor de memoria desde puntero: " << *ptr_notas << std::endl;

    std::cout << "\nTodos los valores del arreglo:\n";
    for(int i = 0; i < 5; i++){
        std::cout << "notas[" << i << "] = " << *(ptr_notas + i) << std::endl;
    }

    return 0;
}