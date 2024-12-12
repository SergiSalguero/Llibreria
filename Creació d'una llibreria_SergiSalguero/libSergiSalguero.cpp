// Creacio d'una llibreria_SergiSalguero.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

// Creacio d'una llibreria_SergiSalguero.cpp
#include "libSergiSalguero.h"

// Exportar les funcions
extern "C" __declspec(dllexport) int add(int a, int b) {
    return a + b;
}

extern "C" __declspec(dllexport) int subtract(int a, int b) {
    return a - b;
}

extern "C" __declspec(dllexport) int multiply(int a, int b) {
    return a * b;
}

extern "C" __declspec(dllexport) double divide(int a, int b) {
    if (b == 0) {
        return 0; // Evitar la divisió per zero
    }
    return (double)a / b;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
