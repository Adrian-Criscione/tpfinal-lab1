////#############################################################################
// ARCHIVO : funciones.h
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

#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
using namespace std;
struct casillero
{
    char letra[2];/*variable que almacena el caracter del casillero*/
    bool acerto;/*esta variable indica si el usuario acerto el  */
    bool cargado;/*esta variable sirve para indicar si fue cargada*/

};
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================== ==============================
// FUNCION : void ayuda()
// ACCION : esta funcion devuelve la ayuda del juego
// PARAMETROS:
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void ayuda()
{
    sys::cls();
    cout << "Las reglas son sencillas: consiste en una cuadricula de tama" << (char)164<< "o" << endl;
    cout << "variable, en la cual se esconden pares de letras: Los " << endl;
    cout << "jugadores deben ir descubriendo las celdas de a una e ir recordando " << endl;
    cout << "donde esta cada letra del par, para asi reunirlos y sumar puntos." << endl;
    cout << "El tablero constara de 3 tamaños distintos dependiendo de la dificultad:" << endl;
    cout << "   1. Facil: Tablero 4 filas por 4 columnas total de 8 pares de fichas." << endl;
    cout << "   2. Moderado: Tablero 6 filas por 6 columnas total de 18 pares de fichas." << endl;
    cout << "   3. Dificil: Tablero 8 filas por 8 columnas total de 32pares de fichas." << endl;
    cout <<"El objetivo es lograr reunir todos pares. El juego concluye cuando el usuario " << endl;
    cout << "logre dar vuelta todas las fichas sin que se acaben los movimientos." << endl;
    cout << endl << "presione una tecla para continuar" << endl;

    cin.ignore();
    sys::cls();

}
//=============================================== ==============================
// FUNCION : void salir(bool *entrar)
// ACCION : esta funcion devuelve la ayuda del juego
// PARAMETROS: bool *entrar: recibe el valor.
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void salir(bool *entrar)
{
    sys::cls();/*borro la pantalla*/
    *entrar=false;/*cambio el valor por puntero*/
}
//=============================================== ==============================
// FUNCION : void inicilizar_tablero_facil(casillero tablero[4][4])
// ACCION : esta funcion pone el cero el struct de la matriz
// PARAMETROS: casillero tablero[4][4]: struct de la matriz
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void inicilizar_tablero_facil(casillero tablero[4][4])
{
    for(int x=0;x<4;x++)/**/
    {
        for(int y=0;y<4;y++)/**/
        {
            tablero[x][y].letra[0]='\0';/**/
            tablero[x][y].acerto=false;/**/
            tablero[x][y].cargado=false;/**/
        }
    }
}
//=============================================== ==============================
// FUNCION : void cargar_modo_moderado(casillero tablero[4][4])
// ACCION : esta funcion recibe el tamaño del tablero en dificultad facil
// PARAMETROS: casillero tablero[6][6]: struct de la matriz
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void inicilizar_tablero_moderado(casillero tablero[6][6])
{
    for(int x=0;x<6;x++)/**/
    {
        for(int y=0;y<6;y++)/**/
        {
            tablero[x][y].letra[0]='\0';/**/
            tablero[x][y].acerto=false;/**/
            tablero[x][y].cargado=false;/**/
        }
    }
}
//=============================================== ==============================
// FUNCION : void cargar_modo_dificil(casillero tablero[8][8])
// ACCION : esta funcion recibe el tamaño del tablero en dificultad facil
// PARAMETROS: casillero tablero[8][8]: struct de la matriz
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void inicilizar_tablero_dificil(casillero tablero[8][8])
{
    for(int x=0;x<8;x++)/**/
    {
        for(int y=0;y<8;y++)/**/
        {
            tablero[x][y].letra[0]='\0';/**/
            tablero[x][y].acerto=false;/**/
            tablero[x][y].cargado=false;/**/
        }
    }
}
//=============================================== ==============================
// FUNCION : void cargar_modo_facil(casillero tablero[4][4])
// ACCION : esta funcion recibe el tamaño del tablero en dificultad facil
// PARAMETROS: casillero tablero[4][4]: struct de la matriz
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void cargar_modo_facil(casillero tablero[4][4])/*recibe el tamaño del
tablero en dificultad facil*/
{
    char alfabeto[2]={'A'};/*valor 65 en la tabla ASCII*/
                           /*arrancamos en la letra A*/
    int fila,columna;/*variables que guardan las posiciones en la matriz*/
    for(int x=0;x<16/2;x++) /*ciclo correspondiente a la cantidad de fichas*/
    {                       /*8 pares de fichas*/
        for(int y=0;y<2;y++)/*ciclo para cada par de fichas*/
        {                    /* 2 vueltas por cada ficha*/
            do
            {
                fila=sys::random(4);/*toma valores de 0 hasta el tamaño*/
                columna=sys::random(4);/*toma valores de 0 hasta el tamaño*/
            }
            while(tablero[fila][columna].cargado!=false);/*reviso que no se halla cargado nada*/
            tablero[fila][columna].cargado=true;/*modifico el valor de cargado a true*/
            strcpy(tablero[fila][columna].letra,alfabeto);/*copio un elemento
            de la cadena fichas*/
        }
        alfabeto[0]+=1;/* incremento el valor del caracter*/
        /*Esto lo hago cuando termina de cargar la letra dos veces*/
        /* de este modo paso al siguiente valor de la tabla ASCII*/
    }
}
//=============================================== ==============================
// FUNCION : void cargar_modo_moderado(casillero tablero[6][6])
// ACCION : esta funcion recibe el tamaño del tablero en dificultad facil
// PARAMETROS: casillero tablero[6][6]: struct de la matriz
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void cargar_modo_moderado(casillero tablero[6][6])/*recibe el tamaño del
tablero en dificultad facil*/
{
    char alfabeto[2]={'A'};/*valor 65 en la tabla ASCII*/
                           /*arrancamos en la letra A*/
    int fila,columna;/*variables que guardan las posiciones en la matriz*/
    for(int x=0;x<36/2;x++) /*ciclo correspondiente a la cantidad de fichas*/
    {                       /*18 pares de fichas*/
        for(int y=0;y<2;y++)/*ciclo para cada par de fichas*/
        {                    /* 2 vueltas por cada ficha*/
            do
            {
                fila=sys::random(6);/*toma valores de 0 hasta el tamaño*/
                columna=sys::random(6);/*toma valores de 0 hasta el tamaño*/
            }
            while(tablero[fila][columna].cargado!=false);/*reviso que no se halla cargado nada*/
            tablero[fila][columna].cargado=true;/*modifico el valor de cargado a true*/
            strcpy(tablero[fila][columna].letra,alfabeto);/*copio un elemento
            de la cadena fichas*/
        }
        alfabeto[0]+=1;/* incremento el valor del caracter*/
        /*Esto lo hago cuando termina de cargar la letra dos veces*/
        /* de este modo paso al siguiente valor de la tabla ASCII*/
    }
}
//=============================================== ==============================
// FUNCION : void cargar_modo_dificil(casillero tablero[8][8])
// ACCION : esta funcion recibe el tamaño del tablero en dificultad facil
// PARAMETROS: casillero tablero[8][8]: struct de la matriz
// DEVUELVE : nada.
// -----------------------------------------------------------------------------

void cargar_modo_dificil(casillero tablero[8][8])/*recibe el tamaño del
tablero en dificultad facil*/
{
    char alfabeto[2]={'A'};/*valor 65 en la tabla ASCII*/
                           /*arrancamos en la letra A*/
    int fila,columna;/*variables que guardan las posiciones en la matriz*/
    for(int x=0;x<64/2;x++) /*ciclo correspondiente a la cantidad de fichas*/
    {                       /*18 pares de fichas*/
        for(int y=0;y<2;y++)/*ciclo para cada par de fichas*/
        {                    /* 2 vueltas por cada ficha*/
            do
            {
                fila=sys::random(8);/*toma valores de 0 hasta el tamaño*/
                columna=sys::random(8);/*toma valores de 0 hasta el tamaño*/
            }
            while(tablero[fila][columna].cargado!=false);/*reviso que no se halla cargado nada*/
            tablero[fila][columna].cargado=true;/*modifico el valor de cargado a true*/
            strcpy(tablero[fila][columna].letra,alfabeto);/*copio un elemento
            de la cadena fichas*/
        }
        if(alfabeto[0]==90)/*si llega a la letra Z*/
        {
            alfabeto[0]-=25;
        }
        else
        {
            alfabeto[0]+=1;/* incremento el valor del caracter*/
            /*Esto lo hago cuando termina de cargar la letra dos veces*/
            /* de este modo paso al siguiente valor de la tabla ASCII*/
        }
    }
}

//=============================================== ==============================
// FUNCION : void comp_letras_facil(casillero tablero[4][4],int f1,int c1,int f2,int c2,int *aciertos)
// ACCION : esta funcion recibe el tamaño del tablero en dificultad facil
// PARAMETROS: casillero tablero[4][4]: struct de la matriz
//             int f1: recibe la fila recien ingresada.
//             int c1: recibe la columna recien ingresada.
//             int f2: recibe la fila anterior.
//             int c2: recibe la columna anterior.
//             int *aciertos: recibe los aciertos.
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void comp_letras_facil(casillero tablero[4][4],int f1,int c1,int f2,int c2,int *aciertos)
{   /*f=fila recien ingresada*//*c=columna recien ingresada*/
    /*fa=fila anterior *//*ca=columna anterior */
    int com;/*declaro una variable entera*/
    com=strcmp(tablero[f1][c1].letra,tablero[f2][c2].letra);
     /*almaceno en la variable com el valor de strcmp*/
    if(com==0)/*strcmp devuelve un 0 si las letras son iguales*/
    {
        tablero[f1][c1].acerto=true;/*muestra la letra del casillero*/
        tablero[f2][c2].acerto=true;/*muestra la letra del casillero*/
        *aciertos+=1;/*incremento el valor de la variabñe acierto*/
    }
}

//=============================================== ==============================
// FUNCION : void comp_letras_moderado(casillero tablero[6][6],int f1,int c1,int f2,int c2,int *aciertos)
// ACCION : esta funcion recibe el tamaño del tablero en dificultad facil
// PARAMETROS: casillero tablero[6][6]: struct de la matriz
//             int f1: recibe la fila recien ingresada.
//             int c1: recibe la columna recien ingresada.
//             int f2: recibe la fila anterior.
//             int c2: recibe la columna anterior.
//             int *aciertos: recibe los aciertos.
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void comp_letras_moderado(casillero tablero[6][6],int f1,int c1,int f2,int c2,int *aciertos)
{   /*f=fila recien ingresada*//*c=columna recien ingresada*/
    /*fa=fila anterior *//*ca=columna anterior */
    int com;/*declaro una variable entera*/
    com=strcmp(tablero[f1][c1].letra,tablero[f2][c2].letra);
     /*almaceno en la variable com el valor de strcmp*/
    if(com==0)/*strcmp devuelve un 0 si las letras son iguales*/
    {
        tablero[f1][c1].acerto=true;/*muestra la letra del casillero*/
        tablero[f2][c2].acerto=true;/*muestra la letra del casillero*/
        *aciertos+=1;/*incremento el valor de la variabñe acierto*/
    }
}

//=============================================== ==============================
// FUNCION : void comp_letras_dificil(casillero tablero[8][8],int f1,int c1,int f2,int c2,int *aciertos)
// ACCION : esta funcion recibe el tamaño del tablero en dificultad facil
// PARAMETROS: casillero tablero[8][8]: struct de la matriz
//             int f1: recibe la fila recien ingresada.
//             int c1: recibe la columna recien ingresada.
//             int f2: recibe la fila anterior.
//             int c2: recibe la columna anterior.
//             int *aciertos: recibe los aciertos.
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void comp_letras_dificil(casillero tablero[8][8],int f1,int c1,int f2,int c2,int *aciertos)
{   /*f=fila recien ingresada*//*c=columna recien ingresada*/
    /*fa=fila anterior *//*ca=columna anterior */
    int com;/*declaro una variable entera*/
    com=strcmp(tablero[f1][c1].letra,tablero[f2][c2].letra);
     /*almaceno en la variable com el valor de strcmp*/
    if(com==0)/*strcmp devuelve un 0 si las letras son iguales*/
    {
        tablero[f1][c1].acerto=true;/*muestra la letra del casillero*/
        tablero[f2][c2].acerto=true;/*muestra la letra del casillero*/
        *aciertos+=1;/*incremento el valor de la variabñe acierto*/
    }
}


















#endif // FUNCIONES_H_INCLUDED
