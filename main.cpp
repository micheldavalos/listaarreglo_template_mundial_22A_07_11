#include <iostream>
using namespace std;
#include "seleccion.hpp"
#include "menu_seleccion.hpp"

int main() {
    Arreglo<Seleccion> mundial(4);
    menu_seleccion(mundial);



    // ListaArreglo<int> larreglo;
    // for (size_t i = 0; i < 100; i++)
    // {
    //     larreglo.push_back(i);
    // }
    // for (size_t i = 0; i < 100; i++)
    // {
    //     cout << larreglo[i] << endl;
    // }
  

    return 0;
}