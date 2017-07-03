//#############################################################################
// ARCHIVO             : main.cpp
// AUTOR/ES            : Carlos Gabriel Gomez. Jose Adrian Criscione
// VERSION             : 0.01 beta.
// FECHA DE CREACION   : 16/06/2017.
// ULTIMA ACTUALIZACION: 29/06/2017.
// LICENCIA            : GPL (General Public License) - Version 3.
//
//  **************************************************************************
//  * El software libre no es una cuestion economica sino una cuestion etica *
//  **************************************************************************
//
// Este programa es software libre;  puede redistribuirlo  o  modificarlo bajo
// los terminos de la Licencia Publica General de GNU  tal como se publica por
// la  Free Software Foundation;  ya sea la version 3 de la Licencia,  o (a su
// eleccion) cualquier version posterior.
//
// Este programa se distribuye con la esperanza  de que le sea util,  pero SIN
// NINGUNA  GARANTIA;  sin  incluso  la garantia implicita de MERCANTILIDAD  o
// IDONEIDAD PARA UN PROPOSITO PARTICULAR.
//
// Vea la Licencia Publica General GNU para mas detalles.
//
// Deberia haber recibido una copia de la Licencia Publica General de GNU junto
// con este proyecto, si no es asi, escriba a la Free Software Foundation, Inc,
// 59 Temple Place - Suite 330, Boston, MA 02111-1307, EE.UU.

//=============================================================================
// SISTEMA OPERATIVO   : Linux (Ubuntu) / Windows XP / Windows 7.
// IDE                 : Code::Blocks - 8.02 / 10.05
// COMPILADOR          : GNU GCC Compiler (Linux) / MinGW (Windows).
// LICENCIA            : GPL (General Public License) - Version 3.
//=============================================================================
// DESCRIPCION:
//              Breve explicacion sobre el contenido del archivo.
//
////////////////////////////////////////////////////////////////////////////////

//*****************************************************************************
//                       CONFIGURACION MULTIPLATAFORMA
//=============================================================================
// COMPILACION EN WINDOWS
//-----------------------------------------------------------------------------
// Si este programa se va a compilar en Windows, descomente las tres lineas
// siguientes, y comente las tres lineas de "COMPILACION EN LINUX".
//-----------------------------------------------------------------------------
#ifndef _WIN32
# define _WIN32
#endif

//=============================================================================
// COMPILACION EN LINUX
//-----------------------------------------------------------------------------
// Si este programa se va a compilar en Linux, descomente las tres lineas
// siguientes, y comente las tres lineas de "COMPILACION EN WINDOWS".
//-----------------------------------------------------------------------------
//#ifndef _LINUX
//  # define _LINUX
//#endif

//*****************************************************************************
//                             INCLUSIONES ESTANDAR
//=============================================================================
#include <iostream> // Libreria de flujos de  Entrada/Salida  que contiene  los
// objetos cin, cout y endl.
#include <cstdlib>  // Libreria estandar que contiene la funcion exit().
#include <string>//librear que contiene funciones de cadenas
//*****************************************************************************
//                             INCLUSIONES PERSONALES
//=============================================================================
#include "CSYSTEM/csystem.h" // Libreria para multiplataforma.
#include "funciones.h"/*Libreria principal*/
#include "validaciones.h"/**/
#include"presentaciones.h"/*libreria para mostrar por pantalla*/
#include"ejercicios.h"/* libreria */
//==============================================================================
// DECLARACION DEL ESPACIO DE NOMBRES POR DEFECTO
//------------------------------------------------------------------------------
using namespace std;
//==============================================================================
// FUNCION PRINCIPAL - PUNTO DE INICIO DEL PROYECTO
//------------------------------------------------------------------------------
int main()
{
    sys::randomize();
    presentacion();
    bool entrar=true;
    int opcion;
    while(entrar!=false)
    {
        menu_principal();
        cout << "Ingrese una opcion: ";
        cin>>opcion;
        cin.ignore();
        switch(opcion)
        {
        case 1:
        {
            jugar();
        }
        break;
        case 2:
        {
            ayuda();
        }
        break;
        case 3:
        {

            salir(&entrar);

        }
        break;
        default:
        {
            cout << "ingrese una opcion valida." << endl;
            cin.ignore();
            sys::cls();

        }
        break;
        }
    }
    cartel_salida();
    //TODO: matriz
    //--------------------------------------------------------------------------
    // FIN DE LA FUNCION main() SIN ERRORES.
    //--------------------------------------------------------------------------
    return 0;
}
//=============================================================================
//                            FIN DE ARCHIVO
//#############################################################################

