# include  " Persona.cpp "
# include  < iostream >
utilizando el espacio de  nombres  estándar ;
clase  Cliente : Persona {
	// caracteristicas
	privado: cadena nit;
	// constructor
	público:
	Cliente (string nom,string ape,string dir, int tel,string f,string n) : Persona(nom,ape,dir,tel,f){
		nit = n;
	}
	// establecer (modificar)
	void  setNit (cadena n){ nit = n;}
	void  setNombres (string nom){ nombres = nom;}
	void  setApellidos (string ape){ apellidos = ape;}
	void  setDirección (string dir){ direccion = dir;}
	void  setTelefono ( int tel){ telefono = tel;}
	void  setFN (cadena f){ fn = f;}
	// obtener (mostrar)
	cadena getNit (){ return nit;}
	string getNombres (){ devolver nombres;}
	string getApellidos (){ return apellidos;}
	string getDirección (){ return direccion;}
	cadena getFN (){ devolver fn;}
	int  getTelefono (){ return telefono;}
	
	 mostrar vacío (){
		cout<< " _______________ " <<endl;
		cout<< " Nit: " << nit<<endl;
		cout<< " Nombres: " <<nombres<<endl;
		cout<< " Apellidos: " <<apellidos<<endl;
		cout<< " Direccion: " <<direccion<<endl;
		cout<< " Telefono: " <<telefono<<endl;
		cout<< " Nacimiento: " <<fn<<endl;
	}
	
};