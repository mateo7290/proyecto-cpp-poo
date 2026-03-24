#ifndef PELICULA_H
#define PELICULA_H

#include <map>
#include <set>
#include <string>
#include "cine.h"
#include "funcion.h"
#include "comentario.h"
#include "dtpelicula.h"
#include "puntaje.h"
#include "dtcine.h"
#include "dtfuncion.h"

 using namespace std;
class Cine;
class Funcion;
class Comentario;
class Puntaje;

class Pelicula{
	private:
		string titulo;
		string sinopsis;
		float puntajePromedio;//atributo calculado
		string poster;
		
		map<int,Cine*>cines;
		map<int,Funcion*>funciones;
		set<Comentario*>comentarios;
		set<Puntaje*>puntajes;
		
	public:
	
		Pelicula(string,string,string);
		~Pelicula();
        string getTitulo();
        string getSinopsis();
        float getPuntajePromedio();
        string getPoster();
		DtPelicula getDatos();
		bool verSiPeliculaPuntaje();
		int verPuntajeDePelicula();
		void añadirPuntaje(int, Pelicula*,Usuario*);
		//mateo op
		void agregarFuncion(Funcion*);
		set<DtCine> accedoPeliculaCine();
		bool esPelicula(string);
		void accedoPeliculaParaFuncion(int,Reserva*);
		void agregarCine(Cine*);
		set<DtFuncion> accedoPelicula();
};
#endif
