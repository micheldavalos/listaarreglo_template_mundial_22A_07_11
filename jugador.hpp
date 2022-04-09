#ifndef JUGADOR_HPP
#define JUGADOR_HPP

#include <string>
using namespace std;

class Jugador
{
private:
    string nombre;
    size_t numeroPlayera;
    size_t golesAnotados;
public:
    Jugador() = default;
    Jugador(const string& nombre,
            size_t numeroPlayera,
            size_t golesAnotados) {
                Jugador::nombre = nombre;
                Jugador::numeroPlayera = numeroPlayera;
                Jugador::golesAnotados = golesAnotados;
            }
    // Getters and Setters
    void setNombre(const string& value) { nombre = value; }
    string getNombre() { return nombre; }

    void setNumeroPlayera(size_t value) { numeroPlayera = value; }
    size_t getNumeroPlayera() { return numeroPlayera; }

    void setGolesAnotados(size_t value) { golesAnotados = value; }
    size_t getGolesAnotados() { return golesAnotados; }
};

#endif