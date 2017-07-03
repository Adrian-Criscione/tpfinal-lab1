////#############################################################################
// ARCHIVO : presentaciones.h
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

#ifndef PRESENTACIONES_H_INCLUDED
#define PRESENTACIONES_H_INCLUDED
#include "CSYSTEM/csystem.h"
using namespace std;

//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================== ==============================
// FUNCION : void presentacion ()
// ACCION : esta funcion devuelve la presentacion del juego
// PARAMETROS:
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void presentacion()
{

    int i;
    for (i = 0; i<150; i++)
    {
        cout << (char)205; //LINEA DEL MEDIO
    }
    cout << endl;

    cout << "       )))              +++              )))              xxx              '*`              +++              >X<            )))              +++     " << endl;
    cout << "      (o o)            (o o)            (o o)            (o o)            (o o)            (o o)            (o o)          (o o)            (o o)    " << endl;
    cout << "  ooO--(_)--Ooo----ooO--(_)--Ooo----ooO--(_)--Ooo----ooO--(_)--Ooo----ooO--(_)--Ooo----ooO--(_)--Ooo----ooO--(_)--Ooo--ooO--(_)--Ooo----ooO--(_)--Ooo" << endl;
    cout << endl;
    for (i = 0; i<150; i++)
    {
        cout << (char)205; //LINEA DEL MEDIO
    }
    cout << endl;
    cout << "  88b           d88      88888888888      88b           d88        ,ad8888ba,        888888888888      88888888888       ad88888ba       888888888888  " << endl;
    cout << "  888b         d888      88               888b         d888       d8a'    `a8b            88           88               d8a     a8b           88       " << endl;
    cout << "  88`8b       d8'88      88               88`8b       d8'88      d8'        `8b           88           88               Y8,                   88       " << endl;
    cout << "  88 `8b     d8' 88      88aaaaa          88 `8b     d8' 88      88          88           88           88aaaaa          `Y8aaaaa,             88       " << endl;
    cout << "  88  `8b   d8'  88      88aaaaa          88  `8b   d8'  88      88          88           88           88aaaaa             aaaaa8b,           88       " << endl;
    cout << "  88   `8b d8'   88      88               88   `8b d8'   88      Y8,        ,8P           88           88                       `8b           88       " << endl;
    cout << "  88    `888'    88      88               88    `888'    88       Y8a.    .a8P            88           88               Y8a     a8P           88       " << endl;
    cout << "  88     `8'     88      88888888888      88     `8'     88        `aY8888Ya'             88           88888888888       aY88888Pa            88       " << endl;
    cout << endl;
    for (i = 0; i<150; i++)
    {
        cout << (char)205; //LINEA DEL MEDIO
    }
    cout << endl;
    sys::msleep(2);
    sys::cls();
}

//=============================================== ==============================
// FUNCION : void menu_principal()
// ACCION : esta funcion devuelve el menu del juego
// PARAMETROS:
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void menu_principal()
{
    int i;

    cout << (char)201;//ESQUINA SUPERIOR IZQUIERDA
    for (i = 0; i<24; i++)
    {
        cout << (char)205; //LINEA DEL MEDIO
    }
    cout << " MEMOTEST ";
    for (i = 0; i<24; i++)
    {
        cout << (char)205; //LINEA DEL MEDIO
    }
    cout << (char)187 << endl; //ESQUINA SUPERIOR DERECHA

    for (i = 0; i<2; i++)
    {
        cout << (char)186 << "                                                          "<< (char)186 << endl; // LATERALES
    }
    cout << (char)186 << "   JUGAR ...................................1             " << (char) 186 << endl;
    cout << (char)186 <<"                                                          " << (char) 186 << endl;
    cout << (char)186 << "   AYUDA ...................................2             " << (char) 186 << endl;
    cout << (char)186 <<"                                                          " << (char) 186 << endl;
    cout << (char)186 << "   SALIR ...................................3             " << (char) 186 << endl;
    for (i = 0; i<5; i++)
    {
        cout << (char)186 << "                                                          "<< (char)186 << endl; // LATERALES
    }
    cout << (char)200; //ESQUINA INFERIOR IZQUIERDA

    for (i = 0; i<58; i++)
    {
        cout << (char)205;//LINEA DEL MEDIO
    }
    cout << (char)188;//ESQUINA INFERIOR DERECHA
    cout << endl << endl;

}
//=============================================== ==============================
// FUNCION : void menu_jugar()
// ACCION : esta funcion devuelve el menu de los niveles del juego
// PARAMETROS:
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void menu_jugar()
{
    int i;
    cout << (char)201;//ESQUINA SUPERIOR IZQUIERDA
    for (i = 0; i<25; i++)
    {
        cout << (char)205; //LINEA DEL MEDIO
    }
    cout << " NIVELES ";
    for (i = 0; i<24; i++)
    {
        cout << (char)205; //LINEA DEL MEDIO
    }
    cout << (char)187 << endl; //ESQUINA SUPERIOR DERECHA

    for (i = 0; i<2; i++)
    {
        cout << (char)186 << "                                                          "<< (char)186 << endl; // LATERALES
    }
    cout << (char)186 << "   FACIL ......................................1          " << (char) 186 << endl;
    cout << (char)186 <<"                                                          " << (char) 186 << endl;
    cout << (char)186 << "   MODERADO ...................................2          " << (char) 186 << endl;
    cout << (char)186 <<"                                                          " << (char) 186 << endl;
    cout << (char)186 << "   DIFICIL ....................................3          " << (char) 186 << endl;
    cout << (char)186 <<"                                                          " << (char) 186 << endl;
    cout << (char)186 << "   SALIR ......................................4          " << (char) 186 << endl;
    for (i = 0; i<5; i++)
    {
        cout << (char)186 << "                                                          "<< (char)186 << endl; // LATERALES
    }
    cout << (char)200; //ESQUINA INFERIOR IZQUIERDA

    for (i = 0; i<58; i++)
    {
        cout << (char)205;//LINEA DEL MEDIO
    }
    cout << (char)188;//ESQUINA INFERIOR DERECHA
    cout << endl << endl;


}
//=============================================== ==============================
// FUNCION : void mostrar_tablero_facil(casillero tablero[4][4])
// ACCION : esta funcion devuelve tablero resuelto.
// PARAMETROS: casillero tablero[4][4]: recibe la estructura de la matriz resuelta
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void mostrar_tablero_facil(casillero tablero[4][4])
{
    int z;
    cout << endl;
    for (z = 0; z<25; z++)
    {
        cout << (char)205; //LINEA DEL MEDIO
    }
    cout << " RESULTADO ";
    for (z = 0; z<25; z++)
    {
        cout << (char)205; //LINEA DEL MEDIO
    }
    cout << endl;
    for(int t=0; t<4; t++)
    {

        cout<<"\t"<<"C"<<t+1<<"\t";
    }
    for(int f=0; f<4; f++)
    {
        cout<<endl;
        cout<<"F"<<f+1;
        for(int c=0; c<4; c++)
        {

            cout<<"\t"<<"|"<< tablero[f][c].letra<<"|"<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    for (z = 0; z<25; z++)
    {
        cout << (char)205; //LINEA DEL MEDIO
    }
    cout << " RESULTADO ";
    for (z = 0; z<25; z++)
    {
        cout << (char)205; //LINEA DEL MEDIO
    }
    sys::msleep(3);
    sys::cls();
}
//=============================================== ==============================
// FUNCION : mostrar_casillero(casillero tablero[4][4],int f,int c,int aciertos,int intento)
// ACCION : esta funcion devuelve tablero con el que se va a jugar.
// PARAMETROS: casillero tablero[4][4]: recibe la estructura de la matriz a jugar
//             int f: recibe las filas.
//             int c: recibe las columnas.
//             int aciertos: recibe la cantidad de aciertos
//             int aciertos: recibe la cantidad de intentos
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void mostrar_casillero(casillero tablero[4][4],int f,int c,int aciertos,int intento)
{

    int z;
    cout << endl;
    for (z = 0; z<25; z++)
    {
        cout << (char)205; //LINEA DEL MEDIO
    }
    cout << " MEMOTEST ";
    for (z = 0; z<25; z++)
    {
        cout << (char)205; //LINEA DEL MEDIO
    }
    cout << endl;
    for(int t=0; t<4; t++)
    {

        cout<<"\t"<<" C"<<t+1<<"\t";
    }

    for(int x=0; x<4; x++)
    {
        /*ciclo correspoendiente a la cantidad de filas*/
        cout<<endl;
        cout<<" F"<<x+1;
        for(int y=0; y<4; y++)
        {

            /*ciclo correspoendiente a la cantidad de columnas*/
            if((tablero[x][y].acerto!=false)||(x+1==f&&y+1==c))/*muestra la letra del casillero*/
            {
                /*este if va con doble parentesis para separar dos situaciones */
                cout<<"\t"<<"|"<< tablero[x][y].letra<<"|"<<"\t";
            }   /*en alguno de los dos casos se debe msostrar la letra*/
            else
            {
                /*en caso contrario se debe mostrar  una x por defecto*/
                cout<<"\t"<<"|"<<"X"<<"|"<<"\t";
            }
        }
        cout<<endl;
    }
    for (z = 0; z<60; z++)
    {
        cout << (char)205;//LINEA DEL MEDIO
    }

    cout << endl << endl;

    // cuadro de resultados
    int i;
    cout << endl;
    cout << (char)201;//ESQUINA SUPERIOR IZQUIERDA
    for (i = 0; i<14; i++)
    {
        cout << (char)205; //LINEA DEL MEDIO
    }
    cout << " TIROS ";
    for (i = 0; i<15; i++)
    {
        cout << (char)205; //LINEA DEL MEDIO
    }

    cout << (char)187 << endl; //ESQUINA SUPERIOR DERECHA

    for (i = 0; i<2; i++)
    {
        cout << (char)186 << "                                    "<< (char)186 << endl; // LATERALES
    }
    cout << (char)186 <<"   ACIERTOS................"<< aciertos <<"        " << (char) 186 << endl;
    cout << (char)186 <<"                                    " << (char) 186 << endl;
    cout << (char)186 <<"   INTENTOS ..............."<< intento <<"       " << (char) 186 << endl;
    cout << (char)186 <<"                                    " << (char) 186 << endl;
    cout << (char)186 <<"   AYUDA (F7-C7)                    " << (char) 186 << endl;
    cout << (char)186 <<"                                    " << (char) 186 << endl;
    cout << (char)186 <<"   SALIR  (F8-C8)                   " << (char) 186 << endl;
    for (i = 0; i<2; i++)
    {
        cout << (char)186 << "                                    "<< (char)186 << endl; // LATERALES
    }
    cout << (char)200; //ESQUINA INFERIOR IZQUIERDA

    for (i = 0; i<36; i++)
    {
        cout << (char)205;//LINEA DEL MEDIO
    }
    cout << (char)188;//ESQUINA INFERIOR DERECHA
    cout << endl << endl;
}
//=============================================== ==============================
// FUNCION : void cartel_gano()
// ACCION : esta funcion devuelve el cartel cuando gana la partida
// PARAMETROS:
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void cartel_gano()
{
    int i;
    cout << (char)201;//ESQUINA SUPERIOR IZQUIERDA
    for (i = 0; i<115; i++)
    {
        cout << (char)205; //LINEA DEL MEDIO
    }

    cout << (char)187 << endl; //ESQUINA SUPERIOR DERECHA

    for (i = 0; i<2; i++)
    {
        cout << (char)186 << "                                                                                                                   "<< (char)186 << endl; // LATERALES
    }

    cout <<(char)186 <<"   ######         ###       ##    ##       ###        ######     ########    ########       ####    ####    ####   "<<(char)186<< endl;
    cout <<(char)186 <<"  ##    ##       ## ##      ###   ##      ## ##      ##    ##       ##       ##             ####    ####    ####   "<<(char)186 << endl;
    cout <<(char)186 <<"  ##            ##   ##     ####  ##     ##   ##     ##             ##       ##             ####    ####    ####   "<<(char)186 << endl;
    cout <<(char)186 <<"  ##   ####    ##     ##    ## ## ##    ##     ##     ######        ##       ######          ##      ##      ##    "<<(char)186 << endl;
    cout <<(char)186 <<"  ##    ##     #########    ##  ####    #########          ##       ##       ##                                    "<<(char)186 << endl;
    cout <<(char)186 <<"  ##    ##     ##     ##    ##   ###    ##     ##    ##    ##       ##       ##             ####    ####    ####   "<<(char)186 << endl;
    cout <<(char)186 <<"   ######      ##     ##    ##    ##    ##     ##     ######        ##       ########       ####    ####    ####   "<<(char)186 << endl;
    for (i = 0; i<3; i++)
    {
        cout << (char)186 << "                                                                                                                   "<< (char)186 << endl; // LATERALES
    }
    cout << (char)200; //ESQUINA INFERIOR IZQUIERDA

    for (i = 0; i<115; i++)
    {
        cout << (char)205;//LINEA DEL MEDIO
    }
    cout << (char)188;//ESQUINA INFERIOR DERECHA
    cout << endl << endl;
    sys::msleep(3);
    sys::cls();
}
//=============================================== ==============================
// FUNCION : void cartel_perdio()
// ACCION : esta funcion devuelve el cartel cuando gana la partida
// PARAMETROS:
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void cartel_perdio()
{
    int i;
    cout << (char)201;//ESQUINA SUPERIOR IZQUIERDA
    for (i = 0; i<98; i++)
    {
        cout << (char)205; //LINEA DEL MEDIO
    }

    cout << (char)187 << endl; //ESQUINA SUPERIOR DERECHA

    for (i = 0; i<2; i++)
    {
        cout << (char)186 << "                                                                                                  "<< (char)186 << endl; // LATERALES
    }

    cout <<(char)186 <<"  ########     ########    ########     ########     ####     ######     ########    ########     "<<(char)186<< endl;
    cout <<(char)186 <<"  ##     ##    ##          ##     ##    ##     ##     ##     ##    ##       ##       ##           "<<(char)186<< endl;
    cout <<(char)186 <<"  ##     ##    ##          ##     ##    ##     ##     ##     ##             ##       ##           "<<(char)186<< endl;
    cout <<(char)186 <<"  ########     ######      ########     ##     ##     ##      ######        ##       ######       "<<(char)186<< endl;
    cout <<(char)186 <<"  ##           ##          ##   ##      ##     ##     ##           ##       ##       ##           "<<(char)186<< endl;
    cout <<(char)186 <<"  ##           ##          ##    ##     ##     ##     ##     ##    ##       ##       ##           "<<(char)186<< endl;
    cout <<(char)186 <<"  ##           ########    ##     ##    ########     ####     ######        ##       ########     "<<(char)186<< endl;

    for (i = 0; i<3; i++)
    {
        cout << (char)186 << "                                                                                                  "<< (char)186 << endl; // LATERALES
    }
    cout << (char)200; //ESQUINA INFERIOR IZQUIERDA

    for (i = 0; i<98; i++)
    {
        cout << (char)205;//LINEA DEL MEDIO
    }
    cout << (char)188;//ESQUINA INFERIOR DERECHA
    cout << endl << endl;
    sys::msleep(3);
    sys::cls();
}
//=============================================== ==============================
// FUNCION : void cartel_salida()
// ACCION : esta funcion devuelve el cartel cuando el usuario sale del juego
// PARAMETROS:
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void cartel_salida()
{
    sys::cls();
    int i;
    cout << (char)201;//ESQUINA SUPERIOR IZQUIERDA
    for (i = 0; i<85; i++)
    {
        cout << (char)205; //LINEA DEL MEDIO
    }

    cout << (char)187 << endl; //ESQUINA SUPERIOR DERECHA

    for (i = 0; i<2; i++)
    {
        cout << (char)186 << "                                                                                     "<< (char)186 << endl; // LATERALES
    }

    cout <<(char)186 <<"   ######      ########        ###        ######     ####       ###        ######    "<<(char)186<< endl;
    cout <<(char)186 <<"  ##    ##     ##     ##      ## ##      ##    ##     ##       ## ##      ##    ##   "<<(char)186<< endl;
    cout <<(char)186 <<"  ##           ##     ##     ##   ##     ##           ##      ##   ##     ##         "<<(char)186<< endl;
    cout <<(char)186 <<"  ##   ####    ########     ##     ##    ##           ##     ##     ##     ######    "<<(char)186<< endl;
    cout <<(char)186 <<"  ##    ##     ##   ##      #########    ##           ##     #########          ##   "<<(char)186<< endl;
    cout <<(char)186 <<"  ##    ##     ##    ##     ##     ##    ##    ##     ##     ##     ##    ##    ##   "<<(char)186<< endl;
    cout <<(char)186 <<"   ######      ##     ##    ##     ##     ######     ####    ##     ##     ######    "<<(char)186<< endl;
    cout <<(char)186 <<"                                                                                     "<<(char)186<< endl;
    cout <<(char)186 <<"                                                                                     "<<(char)186<< endl;
    cout <<(char)186 <<"                      ########      #######     ########                             "<<(char)186<< endl;
    cout <<(char)186 <<"                      ##     ##    ##     ##    ##     ##                            "<<(char)186<< endl;
    cout <<(char)186 <<"                      ##     ##    ##     ##    ##     ##                            "<<(char)186<< endl;
    cout <<(char)186 <<"                      ########     ##     ##    ########                             "<<(char)186<< endl;
    cout <<(char)186 <<"                      ##           ##     ##    ##   ##                              "<<(char)186<< endl;
    cout <<(char)186 <<"                      ##           ##     ##    ##    ##                             "<<(char)186<< endl;
    cout <<(char)186 <<"                      ##            #######     ##     ##                            "<<(char)186<< endl;
    cout <<(char)186 <<"                                                                                     "<<(char)186<< endl;
    cout <<(char)186 <<"                                                                                     "<<(char)186<< endl;
    cout <<(char)186 <<"           ##    ##     ##     ######         ###       ########                     "<<(char)186<< endl;
    cout <<(char)186 <<"           ##    ##     ##    ##    ##       ## ##      ##     ##                    "<<(char)186<< endl;
    cout <<(char)186 <<"           ##    ##     ##    ##            ##   ##     ##     ##                    "<<(char)186<< endl;
    cout <<(char)186 <<"           ##    ##     ##    ##   ####    ##     ##    ########                     "<<(char)186<< endl;
    cout <<(char)186 <<"     ##    ##    ##     ##    ##    ##     #########    ##   ##                      "<<(char)186<< endl;
    cout <<(char)186 <<"     ##    ##    ##     ##    ##    ##     ##     ##    ##    ##                     "<<(char)186<< endl;
    cout <<(char)186 <<"      ######      #######      ######      ##     ##    ##     ##                    "<<(char)186<< endl;



    for (i = 0; i<3; i++)
    {
        cout << (char)186 << "                                                                                     "<< (char)186 << endl; // LATERALES
    }
    cout << (char)200; //ESQUINA INFERIOR IZQUIERDA

    for (i = 0; i<85; i++)
    {
        cout << (char)205;//LINEA DEL MEDIO
    }
    cout << (char)188;//ESQUINA INFERIOR DERECHA
    cout << endl << endl;

}

#endif // PRESENTACIONES_H_INCLUDED
