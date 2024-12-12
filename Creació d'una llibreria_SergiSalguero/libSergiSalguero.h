// libSergiSalguero.h
#pragma once

// Declaració de les funcions exportades
extern "C" __declspec(dllexport) int add(int a, int b);
extern "C" __declspec(dllexport) int subtract(int a, int b);
extern "C" __declspec(dllexport) int multiply(int a, int b);
extern "C" __declspec(dllexport) double divide(int a, int b);