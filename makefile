all: main.o controlador_crearReserva.o controlador_extras.o controlador_pelicula.o controlador_sesionUsuario.o controlador_altaFuncionyCine.o fabrica.o usuario.o pelicula.o cine.o sala.o funcion.o reserva.o debito.o credito.o comentario.o puntaje.o financiera.o dtpelicula.o dtcine.o dtfuncion.o dtsala.o dtreserva.o dtpuntaje.o dtusuario.o dtcomentario.o dtfecha.o dtdireccion.o dthorario.o handlerUsuario.o handlerCine.o handlerPelicula.o fechaSistema.o dtfechasistema.o dtdebito.o dtcredito.o

	g++ -o main main.o controlador_crearReserva.o controlador_extras.o controlador_pelicula.o controlador_sesionUsuario.o controlador_altaFuncionyCine.o fabrica.o usuario.o pelicula.o cine.o sala.o funcion.o reserva.o debito.o credito.o comentario.o puntaje.o financiera.o dtpelicula.o dtcine.o dtfuncion.o dtsala.o dtreserva.o dtpuntaje.o dtusuario.o dtcomentario.o dtfecha.o dtdireccion.o dthorario.o handlerUsuario.o handlerCine.o handlerPelicula.o fechaSistema.o dtfechasistema.o dtdebito.o dtcredito.o
	
main.o: main.cpp
	g++ -c main.cpp
	
controlador_crearReserva.o: controlador_crearReserva.h controlador_crearReserva.cpp
	g++ -c controlador_crearReserva.cpp
	
controlador_extras.o: controlador_extras.h controlador_extras.cpp
	g++ -c controlador_extras.cpp

controlador_pelicula.o: controlador_pelicula.h controlador_pelicula.cpp
	g++ -c controlador_pelicula.cpp

controlador_sesionUsuario.o: controlador_sesionUsuario.h controlador_sesionUsuario.cpp
	g++ -c controlador_sesionUsuario.cpp
	
controlador_altaFuncionyCine.o: controlador_altaFuncionyCine.h controlador_altaFuncionyCine.cpp
	g++ -c controlador_altaFuncionyCine.cpp

fabrica.o: fabrica.h fabrica.cpp
	g++ -c fabrica.cpp
	
usuario.o: usuario.h usuario.cpp
	g++ -c usuario.cpp

pelicula.o: pelicula.h pelicula.cpp
	g++ -c pelicula.cpp
	
cine.o: cine.h cine.cpp
	g++ -c cine.cpp

sala.o: sala.h sala.cpp
	g++ -c sala.cpp

funcion.o: funcion.h funcion.cpp
	g++ -c funcion.cpp

reserva.o: reserva.h reserva.cpp
	g++ -c reserva.cpp

debito.o: debito.h debito.cpp
	g++ -c debito.cpp

credito.o: credito.h credito.cpp
	g++ -c credito.cpp

comentario.o: comentario.h comentario.cpp
	g++ -c comentario.cpp

puntaje.o: puntaje.h puntaje.cpp
	g++ -c puntaje.cpp

financiera.o: financiera.h financiera.cpp
	g++ -c financiera.cpp

dtpelicula.o: dtpelicula.h dtpelicula.cpp
	g++ -c dtpelicula.cpp

dtcine.o: dtcine.h dtcine.cpp
	g++ -c dtcine.cpp

dtfuncion.o: dtfuncion.h dtfuncion.cpp
	g++ -c dtfuncion.cpp

dtsala.o: dtsala.h dtsala.cpp
	g++ -c dtsala.cpp

dtreserva.o: dtreserva.h dtreserva.cpp
	g++ -c dtreserva.cpp

dtpuntaje.o: dtpuntaje.h dtpuntaje.cpp
	g++ -c dtpuntaje.cpp

dtusuario.o: dtusuario.h dtusuario.cpp
	g++ -c dtusuario.cpp

dtcomentario.o: dtcomentario.h dtcomentario.cpp
	g++ -c dtcomentario.cpp

dtfecha.o: dtfecha.h dtfecha.cpp
	g++ -c dtfecha.cpp
	
dtdireccion.o: dtdireccion.h dtdireccion.cpp
	g++ -c dtdireccion.cpp
	
dthorario.o: dthorario.h dthorario.cpp
	g++ -c dthorario.cpp
	
handlerUsuario.o: handlerUsuario.h handlerUsuario.cpp
	g++ -c handlerUsuario.cpp
	
handlerCine.o: handlerCine.h handlerCine.cpp
	g++ -c handlerCine.cpp
	
handlerPelicula.o: handlerPelicula.h handlerPelicula.cpp
	g++ -c handlerPelicula.cpp

fechaSistema.o: fechaSistema.h fechaSistema.cpp
	g++ -c fechaSistema.cpp
	
dtfechasistema.o: dtfechasistema.h dtfechasistema.cpp
	g++ -c dtfechasistema.cpp
		
dtdebito.o: dtdebito.h dtdebito.cpp
	g++ -c dtdebito.cpp

dtcredito.o: dtcredito.h dtcredito.cpp
	g++ -c dtcredito.cpp


clean: 
	rm -f main
	rm -f *.o
