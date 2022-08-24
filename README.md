# FIB-PRO1 [Programación I]
Repositorio del curso de Programación I en el grado de Ingeniería Informática en la FIB UPC

Algunos recursos para consultas:

- [Tutoriales sobre C++](https://www.learncpp.com/)
- [Manual de referencia I](https://en.cppreference.com/w/)
- [Manual de referencia II](https://cplusplus.com/)

Estructura general códigos PRO1:
```cc
// inclusiones de headers
#include <iostream>
#include <vector>
#include <string>

// importar símbolos de la librería estándard
// a este espacio de nombres (permite usar cout en vez de std::cout)
using namespace std;

// Definiciones de tipos
typedef vector<int> matriz_t;

// definiciones de funciones
int suma(int x, int y) {
  return x + y;
}

int main() {
  //código aquí
  cout << "Dentro del main" << endl;
  return 0;
}
```

Compilar y linkado en linux (g++):
```shell
cd <directorio_de_mi_programa>
g++ my_programa.cc -o nombre_programa
./nombre_programa
```
>>> Para compilar usando el estándard 11 de C++ (C++11), usar parámetro ``-std=c++11``

cd <directorio_de_mi_programa>
g++ my_programa.cc -o nombre_programa -std=c++11
./nombre_programa
```
