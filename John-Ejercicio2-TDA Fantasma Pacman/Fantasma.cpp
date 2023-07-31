#include "Fantasma.h"
#include <iostream>
#include <string>

using std::string;
using FantasmaPacman::Fantasma;

/*Implementación de las funciones del TDA "Fantasma" definido en "Fantasma.h".
 El TDA Fantasma tiene atributos como velocidad, color y estado (comible o no comible).
 Este archivo contiene la implementación de las funciones que permiten crear, manipular
 y destruir objetos de tipo Fantasma.*/
struct FantasmaPacman::Fantasma{
    int velocidad;
    string color;
    Estado estado;
};
Fantasma* FantasmaPacman::crearFantasma(double velocidad, string color, Estado estado){
    Fantasma* NewFantasma= new Fantasma;
    NewFantasma->velocidad= velocidad;
    NewFantasma->color= color;
    NewFantasma->estado= NoComible;
    return NewFantasma;
}

int getVelocidad(const Fantasma* fantasma){
    return fantasma->velocidad;
}
string getColor(const Fantasma* fantasma){
    return fantasma->color;
}
Estado getEstado(const Fantasma* fantasma){
    return fantasma->estado;
}
void aumentarVelocidad(Fantasma* fantasma){
    fantasma->velocidad++;
}
void disminuirVelocidad(Fantasma* fantasma){
    if (fantasma->velocidad > 0){
        fantasma->velocidad--;
    }
}
void cambiarEstado(Fantasma* fantasma, Estado nuevoEstado){
    fantasma->estado= nuevoEstado;
}
void revivir(Fantasma* fantasma){
    fantasma->estado= NoComible;
}
void Comido(Fantasma* fantasma){
    fantasma->estado= Comible;
}
void Destruir(Fantasma* fantasma){
	delete fantasma;
}