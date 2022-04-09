#ifndef MENU_SELECCION_HPP
#define MENU_SELECCION_HPP

#include "seleccion.hpp"
#include <iostream>
#include "menu_jugador.hpp"

void menu_seleccion(Arreglo<Seleccion>& mundial) {
    string op;
    while (true)
    {
        cout << "1) Agregar Seleccion" << endl;
        cout << "2) Mostrar Selecciones" << endl;
 
        cout << "0) Salir" << endl;
        cout << "Elige opcion: ";
        cin >> op; cin.ignore();

        if (op == "1") {
            if (mundial.full()) {
                cout << "Mundial completo" << endl;
                continue;
            }
            string nombre;
            cout << "Nombre de la Seleccion: ";
            getline(cin, nombre);

            Seleccion s(nombre);
            mundial.push_back(s);
        }
        else if (op == "2") {
            if (mundial.empty()) {
                cout << "No hay selecciones" << endl;
                continue;
            }
            size_t cont{0};
            size_t op_sel;
            for (size_t i = 0; i < mundial.size(); i++)
            {
                cout << cont + 1 << ") " << mundial[i].getNombre() << endl;
                cont++;
            }
            cout << "0) Salir" << endl;
            cout << "Eliga una seleccion: ";
            cin >> op_sel; cin.ignore();
            if (op_sel == 0) continue;
            else if (op_sel > mundial.size()) {
                cout << "Opcion no valida" << endl;
                continue;
            }
            Seleccion* s = &mundial[op_sel - 1];
            cout << "Seleccion elegida: " << s->getNombre() << endl;
            menu_jugador(s);
        }
        
        else if (op == "0") {
            break;
        }
    }
    
}

#endif