# include  " Cliente.cpp "
# include  "iostream" // < iostream >
utilizando el espacio de  nombres  estándar ;
principal (){
	cadena n,nom,mono,dir,fn;
	tel int ;
	cout<< " Entrada Nit: " ;
	cin>>n;
	cout<< " Ingrese Nombres: " ;
	cin>>nom;
	cout<< " Ingrese Apellidos: " ;
	cin>>simio;
	cout<< " Dirección de ingreso: " ;
	cin>>dir;
	cout<< " Ingreso Nacimiento: " ;
	cin>>fn;
	cout<< " Ingreso Telefono: " ;
	cin>>tel;
	
	// instancia de un objeto
	Cliente obj = Cliente (nom,ape,dir,tel,fn,n);
	objeto mostrar ();
	cout<< " Modificar Nit: " ;
	cin>>n;
	cout<< " Modificar Nombres: " ;
	cin>>nom;
	cout<< " Modificar Apellidos: " ;
	cin>>simio;
	cout<< " Modificar Direccion: " ;
	cin>>dir;
	cout<< " Modificar Nacimiento: " ;
	cin>>fn;
	cout<< " Modificar Telefono: " ;
	cin>>tel;
	
	objeto conjuntoNit (n);
	objeto setNombres (nombre);
	objeto setApellidos (mono);
	objeto setDirección (dir);
	objeto establecerFN (fn);
	objeto setTeléfono (tel);
	cout<< " -------- Obtener -------------- " <<endl;
	cout<< " Nit Modificado: " <<obj. getNit ()<<endl;
	cout<< " Nombres Modificados: " <<obj. getNombres ()<<endl;
	cout<< " Apellidos Modificado: " <<obj. getApellidos ()<<endl;
	cout<< " Direccion Modificado: " <<obj. getDirección ()<<endl;
	cout<< " Telefono Modificado: " <<obj. getTelefono ()<<endl;
	cout<< " Nacimiento Modificado: " <<obj. getFN ()<<endl;
	// obj.mostrar();
	
	
}