////#############################################################################
// ARCHIVO : validaciones.h
// AUTOR : Carlos Gabriel Gomez - Jose Adrian Criscione
// FECHA DE CREACION : 16/06/2017.
// ULTIMA ACTUALIZACION: 30/06/2017.
// LICENCIA : GPL (General Public License) - Version 3.
//=============================================================================
// SISTEMA OPERATIVO : Linux (Ubuntu) / Windows XP 7 / Windows 10 .
// IDE : Code::Blocks - 8.02 / 1 6
// COMPILADOR : GNU GCC Compile r (Linux) / MinGW Windows).
// LICENCIA : GPL (General Public License) - Version 3.
//=============================================================================
// DESCRIPCION:
// aquí va una descripción general de la libreria
//
////////////////////// ///////////////////////////////////////////////////////////

#ifndef VALIDACIONES_H_INCLUDED
#define VALIDACIONES_H_INCLUDED
using namespace std;

//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================== ==============================
// FUNCION : bool validar_posicion(casillero tablero[4][4],int f,int c)
// ACCION : esta funcion valida que la ubicacion que ingresa el usuario exista
// PARAMETROS: casillero tablero: estructura del tablero
//             int f: recibe el numero de filas
//             int c: recibe el numero de columnas
// DEVUELVE : bool -- > devuelde True si la posicion existe.
// -----------------------------------------------------------------------------

bool validar_posicion(casillero tablero[4][4],int f,int c)
{
    /* esta funcion valida que la ubicacion que ingresa el usuario
        exista y no le mande fruta XD  */
    bool pos=false;
    for(int x=0; x<4; x++)
    {
        for(int y=0; y<4; y++)
        {
            if(x+1==f&&y+1==c)
            {
                /* */
                pos=true;
            }

        }
    }
    return pos;
}

//=============================================== ==============================
// FUNCION : validar_repetido(casillero tablero[4][4],int f,int c)
// ACCION : esta funcion valida el tiro repetido del usuario para que no lo cuente
// PARAMETROS: casillero tablero: estructura del tablero
//             int f: recibe el numero de filas
//             int c: recibe el numero de columnas
// DEVUELVE : bool -- > devuelde True si la tiro ya existe.
// -----------------------------------------------------------------------------

bool validar_repetido(casillero tablero[4][4],int f,int c)
{
    /* esta funcion valida que la ubicacion que ingresa el usuario*/
    bool pos=false;
    if(tablero[f-1][c-1].acerto!=false)/* !=false, es decir, que es true*/
    {
        /*f-1 y c-1 ya que el vector empieza en 0*/
        pos=true;/* cambio el valor de pos */
    }   /*retorno el valor de pos*/
    return pos;
}
//=============================================== ==============================
// FUNCION : validar_numero(char *cad1)
// ACCION : esta funcion valida que el usuario ingrese numeros y no letras
// PARAMETROS: char cad1: recibe el numero transformado en ascii
// DEVUELVE : bool -- > devuelde True si el numero es valido.
// -----------------------------------------------------------------------------
bool validar_numero(char *cad1)/* valida numero entre 0 y 9*/
{
    int x=0;
    bool valor=false;
    while(cad1[x]!='\0')
    {
        if (cad1[x]<48||cad1[x]>57)
        {
            valor=true;
        }
        x++;
    }
    return valor;
}
//=============================================== ==============================
// FUNCION : bool validar_tiro(casillero tablero[4][4],int a,int b,int c, int d)
// ACCION : esta funcion devuelve si gano el jugador
// PARAMETROS: casillero tablero[4][4]: recibe la estructura
//             int a: fila actual
//             int b: columna actual
//             int c: fila anterior
//             int d: columna anterior
// DEVUELVE : bool -- > devuelde True si la posicion se repite.
// -----------------------------------------------------------------------------
bool validar_tiro(casillero tablero[4][4],int a,int b,int c, int d)
{
    bool pos=false;
    if(a==c&&b==d)
    {
        pos=true;
    }
    return pos;

}
//=============================================== ==============================
// FUNCION : bool validar_gano(casillero tablero[4][4])
// ACCION : esta funcion devuelve si gano el jugador
// PARAMETROS: casillero tablero[4][4]: recibe la estructura
// DEVUELVE : bool -- > devuelde True si el jugador gano.
// -----------------------------------------------------------------------------
bool validar_gano(casillero tablero[4][4])
{
    bool gano=true;
    for(int x=0; x<4; x++)
    {
        for(int y=0; y<4; y++)
        {
            if(tablero[x][y].acerto!=true)
            {
                /* */
                gano=false;
            }

        }
    }
    return gano;
}
#endif // VALIDACIONES_H_INCLUDED
