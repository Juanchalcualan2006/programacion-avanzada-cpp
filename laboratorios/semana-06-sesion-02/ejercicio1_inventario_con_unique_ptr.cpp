#include <iostream>
#include <memory>

// Cambiado el tipo de retorno a std::unique_ptr<int[]>
// y se crea el arreglo con std::make_unique<int[]>(cantidadProductos)
std::unique_ptr<int[]> crearInventario(int cantidadProductos) {
    auto stock = std::make_unique<int[]>(cantidadProductos);
    for (int i = 0; i < cantidadProductos; i++) {
        stock[i] = 0;
    }
    return stock;
}

void mostrarInventario(int* stock, int cantidadProductos) {
    for (int i = 0; i < cantidadProductos; i++) {
        std::cout << "Producto " << i << ": " << stock[i] << " unidades" << std::endl;
    }
}

int contarProductosAgotados(int* stock, int cantidadProductos) {
    int totalAgotados = 0;
    for (int i = 0; i < cantidadProductos; i++) {
        if (stock[i] == 0) totalAgotados++;
    }
    return totalAgotados;
}

int obtenerReporteFinal(int* stock, int cantidadProductos) {
    int totalUnidades = 0;
    for (int i = 0; i < cantidadProductos; i++) totalUnidades += stock[i];
    return totalUnidades;
}

int main() {
    int cantidadProductos = 5;

    // Declarado "stock" como std::unique_ptr<int[]> en vez de int*
    std::unique_ptr<int[]> stock = crearInventario(cantidadProductos);
    stock[0] = 10;
    stock[1] = 5;
    stock[3] = 8;

    // Se pasan stock.get() a las funciones que reciben int*,
    // sin ceder la propiedad del recurso
    mostrarInventario(stock.get(), cantidadProductos);
    std::cout << "Productos agotados: " << contarProductosAgotados(stock.get(), cantidadProductos) << std::endl;
    std::cout << "Total de unidades: " << obtenerReporteFinal(stock.get(), cantidadProductos) << std::endl;

    // Eliminado el delete[] por completo. Con unique_ptr, "stock"
    // libera su memoria solo cuando sale de alcance al terminar main.
    return 0;
}
