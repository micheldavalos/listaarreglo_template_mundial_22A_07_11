#ifndef LISTAARREGLO_HPP
#define LISTAARREGLO_HPP

#include "arreglo.hpp"

template <class T>
class ListaArreglo : public Arreglo<T>
{
    size_t nuevo_tam{50};
    void expandir() {
        
        T* nuevo = new T[Arreglo<T>::tam + nuevo_tam];
        for (size_t i = 0; i < Arreglo<T>::cont; i++)
        {
           nuevo[i] = Arreglo<T>::arreglo[i];
        }
        Arreglo<T>::tam = Arreglo<T>::tam + nuevo_tam;
        delete[] Arreglo<T>::arreglo;
        Arreglo<T>::arreglo = nuevo;
        cout << "Expandiendo a " << Arreglo<T>::tam << endl;       
    }
public:
    ListaArreglo():Arreglo<T>(5){}
    void push_back(const T& e) {
        if (Arreglo<T>::full()) expandir();
                
        Arreglo<T>::arreglo[Arreglo<T>::cont] = e;
        Arreglo<T>::cont++;
    }
    void push_front(const T& e) {
        if (Arreglo<T>::full()) expandir();

        for (size_t i = Arreglo<T>::cont; i > 0; i--) {
            Arreglo<T>::arreglo[i] = Arreglo<T>::arreglo[i-1];
        }
        
        Arreglo<T>::arreglo[0] = e;
        Arreglo<T>::cont++;
    }
    void insert(const T& e, size_t pos) {
        if (pos >= Arreglo<T>::cont) throw out_of_range("Invalid position");
        else if (Arreglo<T>::full()) expandir();

        for (size_t i = Arreglo<T>::cont; i > pos; i--) {
            Arreglo<T>::arreglo[i] = Arreglo<T>::arreglo[i-1];
        }
        Arreglo<T>::arreglo[pos] = e;
        Arreglo<T>::cont++;
    }
};

#endif