#include <iostream>
#include <sstream>

int main() {
    int NUM, RESUL, T, I;
    std::string linea;

    std::cout << "CUANTAS TABLAS: ";
    std::getline(std::cin, linea);
    std::istringstream stream(linea);
    if (!(stream >> NUM)) {
        std::cout << "Número no válido." << std::endl;
        return 1;
    }

    T = 1;
    while (T <= NUM) {
        I = 10;
        while (I >= 1) {
            RESUL = T * I;
            std::cout << T << " * " << I << " = " << RESUL << std::endl;
            I = I - 1;
        }

        std::cout << "Pulse una tecla: ";
        std::cin.get();
        T = T + 1;
    }

    return 0;
}