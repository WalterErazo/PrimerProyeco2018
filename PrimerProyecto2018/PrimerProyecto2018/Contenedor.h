#pragma once
ref class Contenedor
{
public:
	Contenedor();

public:
	System::String^ Columna;

public: 
	System::String^ Identificacion;

public: 
	System::String^ NomEmpresa;

public:
	System::String^ NombPersonaEncargada;

public: 
	int MontoProducto;

public:
	System::String^ TipoProducto;

public:
	System::String^ ObtenerTexto();

};

