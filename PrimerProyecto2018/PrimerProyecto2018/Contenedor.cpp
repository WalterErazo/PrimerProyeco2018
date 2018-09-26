#include "Contenedor.h"



Contenedor::Contenedor()
{
}

System::String ^Contenedor::ObtenerTexto() {
	return " Columna: " + Columna +" Id: " + Identificacion + " Nombre de la Empresa: " + NomEmpresa + " Nombre de Persona Encargada: " + NombPersonaEncargada + " Monto de Contenedro: " + MontoProducto.ToString() + " Tipo de Producto: " + TipoProducto;
}
