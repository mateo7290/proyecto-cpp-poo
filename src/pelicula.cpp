#include "pelicula.h"
#include "dtpelicula.h"
#include "handlerUsuario.h"
#include "handlerPelicula.h"
#include <iostream>

Pelicula::Pelicula(string unTitulo,string unaSinopsis,string unPoster){

	titulo=unTitulo;
	sinopsis=unaSinopsis;
	poster=unPoster;
	puntajePromedio=0;
	
}
Pelicula::~Pelicula(){
	
		//cout<<"antes del bucle en pelicula cpp"<<endl;
	for(map<int,Funcion*>::iterator it=funciones.begin();it!=funciones.end();it++){
		//cout<<"antes de remover sus funciones de la sala"<<endl;
		it->second->removerseDeSala();
		//cout<<"despues de remover sus funciones de la sala y antes del delete funcion"<<endl;
		delete it->second;
		//cout<<"despues del delete funcion"<<endl;
	}


}
string Pelicula:: getTitulo(){
return titulo;
}
string Pelicula::getSinopsis(){
return sinopsis;
}
float Pelicula::getPuntajePromedio(){
return puntajePromedio;
}
string Pelicula:: getPoster(){
return poster;

}
DtPelicula Pelicula::getDatos(){//devuelve un dtPelicula 
	return DtPelicula(getTitulo(), getSinopsis(), getPuntajePromedio(), getPoster());

}
bool Pelicula::verSiPeliculaPuntaje(){
set<Puntaje*>::iterator itpun;
bool esDelUsuario;
for(itpun = puntajes.begin(); itpun != puntajes.end(); itpun++){
   esDelUsuario=(*itpun)->esDelUsuario();
	if(esDelUsuario==true){
	return true;
		}
  }
        return false;
}
int Pelicula::verPuntajeDePelicula(){
	set<Puntaje*>::iterator itpun;
	bool esDelUsuario;
	for(itpun = puntajes.begin(); itpun != puntajes.end(); itpun++){
	   esDelUsuario=(*itpun)->esDelUsuario();
		if(esDelUsuario==true){
		int puntaje=(*itpun)->getPuntos();
		return puntaje;
		}
	}
	return 0;
}
void Pelicula::añadirPuntaje(int punt, Pelicula* p, Usuario* u){

Puntaje* pu= new Puntaje(punt, u, p);
puntajes.insert(pu);
}
void Pelicula::agregarFuncion(Funcion* f){
 
    this->funciones.insert(pair<int,Funcion*>(f->getId(),f));

}
set<DtCine> Pelicula::accedoPeliculaCine(){
	
	set<DtCine> setdc;
	
	for(map<int,Cine*>::iterator it=this->cines.begin();it!=this->cines.end();it++){
	
		DtCine dtc=DtCine(it->second->getId(),it->second->getDireccion().getCalle(),it->second->getDireccion().getNumero());
		setdc.insert(dtc);
	}
	return setdc;

}
bool Pelicula::esPelicula(string unTitulo){

	if(titulo==unTitulo){
	
		return true;
	}else{
	
		return false;
	}

}
void Pelicula::accedoPeliculaParaFuncion(int idF,Reserva* r){
	
	Funcion* f;
	
	map<int,Funcion*>::iterator it=this->funciones.find(idF);
	f=it->second;
	
	f->accedoFuncionParaReserva(r);

}
void Pelicula::agregarCine(Cine* c){ 
    this->cines.insert(pair<int,Cine*>(c->getId(),c));
}
set<DtFuncion> Pelicula::accedoPelicula(){

	set<DtFuncion> setdtf;
	
	for(map<int,Funcion*>::iterator it=funciones.begin();it!=funciones.end();it++){
	
		setdtf.insert(it->second->accedoFuncionConReserva());
	}
	
	return setdtf;

}	
	
	
	
	
