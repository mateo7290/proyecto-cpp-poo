#ifndef COMENTARIO_H
#define COMENTARIO_H

#include <string>
#include "usuario.h"
#include "pelicula.h"

class Pelicula;
class Usuario;

using namespace std;

class Comentario{
	private:
		string texto;
		Usuario* usuario;
		Pelicula* pelicula;
	public:




};
#endif
