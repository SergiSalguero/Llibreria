// Main.cpp
#include <iostream>
#include "libSergiSalguero.h" // Inclou l'arxiu d'encapçalament de la DLL

int main() {
    int num11 = 150, num2 = 5;

    std::cout << "Suma: " << add(num11, num2) << std::endl;
    std::cout << "Resta: " << subtract(num11, num11) << std::endl;
    std::cout << "Multiplicar: " << multiply(num11, num2) << std::endl;
    std::cout << "Dividir: " << divide(num11, num2) << std::endl;

    return 0;
}