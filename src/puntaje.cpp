#include "puntaje.h"
#include "pelicula.h"
#include "usuario.h"
Puntaje::Puntaje(int punt, Usuario* user, Pelicula* pel){
		puntos=punt;
		usuario=user;
		pelicula=pel;
}
bool Puntaje::esDelUsuario(){
	if(usuario->getIniciarSesion()==true)
	return true;
	else
	return false;
}
int  Puntaje::getPuntos(){
	return puntos;

}
