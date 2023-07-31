#ifndef FANTASMA_H_
#define FANTASMA_H_
#include <string>

using std::string;
enum Estado { NoComible, Comible };

/*Este archivo contiene la definición de un TDA (Tipo de Dato Abstracto) llamado "Fantasma".
El TDA Fantasma tiene atributos como velocidad, color y estado (comible o no comible).
El TDA proporciona funciones para crear, manipular y destruir objetos de tipo Fantasma.*/
namespace FantasmaPacman{
	struct Fantasma;
	Fantasma* crearFantasma(double velocidad, string color, Estado estado);
	int getVelocidad(const Fantasma* fantasma);
	string getColor(const Fantasma* fantasma);
	Estado getEstado(const Fantasma* fantasma);
	void aumentarVelocidad(Fantasma* fantasma);
	void disminuirVelocidad(Fantasma* fantasma);
	void cambiarEstado(Fantasma* fantasma, Estado nuevoEstado);
	void revivir(Fantasma* fantasma);
	void Comido(Fantasma* fantasma);
	void Destruir(Fantasma* fantasma);
}
#endif