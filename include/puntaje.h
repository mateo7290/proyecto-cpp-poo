#ifndef PUNTAJE_H
#define PUNTAJE_H

#include "usuario.h"
#include "pelicula.h"

class Pelicula;
class Usuario;

class Puntaje{
	private:
		int puntos;
		Usuario* usuario;
		Pelicula* pelicula;
	public:
	Puntaje(int, Usuario*, Pelicula*);
	bool esDelUsuario();
	int  getPuntos();




};
#endif
