////#############################################################################
// ARCHIVO : ejercicio.h
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
#ifndef EJERCICIOS_H_INCLUDED
#define EJERCICIOS_H_INCLUDED

using namespace std;


//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================== ==============================
// FUNCION : void facil()
// ACCION : inicializa el modo facil
// PARAMETROS:
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void facil()
{
    sys::cls();
    /*:::===Inicializacion de la funcion===:::*/
    casillero tablero[4][4];
    inicilizar_tablero_facil(tablero);
    cargar_modo_facil(tablero);

    /*:::===decalaracion de variables obligatorias===:::*/
    int aciertos=0,intento=20,fila,columna,bandera=0,ban2,f1,c1,f2,c2;
    /*                                               bandera2::     */
    bool pos,tir,ayu=false,rep;/*variable bandera*/
    /* pos -> posicion,tir-> tiro ,ayu->ayuda ,rep -> repetido*/

    /*:::===Inicio de la partida===:::*/

    mostrar_casillero(tablero,fila,columna,aciertos,intento);
    for(int x=0; x<10; x++) /*el ciclo es la mitad de 20*/
    {
        if(bandera>0)
        {
            break;   /*el break corta el primer ciclo*/
        }

        ban2=0;
        for(int y=0; y<2; y++) /*intento/10=2;LOL */
        {
            /*la variable y realiza 2 vueltas por cada intento*/

            if(bandera>0)
            {
                break;/*el break corta el segundo ciclo*/
            }
            do
            {
                cout<<"Ingrese una fila :";
                cin>>fila;
                cin.ignore();
                cout<<"Ingrese una columna :";
                cin>>columna;
                cin.ignore();
                if(fila==0&&columna==0)
                {
                    bandera++;
                    break;
                }
                //mostrar matriz resuelta
                else if((fila==6&&columna==6)&&(ayu!=true))
                {

                    sys::cls();
                    mostrar_tablero_facil(tablero);
                    ayu=true;
                    mostrar_casillero(tablero,fila,columna,aciertos,intento);
                }
                //mostrar ayuda
                if(fila==7&&columna==7)
                {
                    ayuda();
                    sys::cls();
                    mostrar_casillero(tablero,fila,columna,aciertos,intento);
                }
                if(fila==8&&columna==8)
                {
                    char op;
                    cout << endl;
                    cout << "desea abandoar la partida? Presione S para salir o N para continuar: ";
                    cin >> op;
                    cin.ignore();
                    switch(op)
                    {
                    case 's':
                    case 'S':
                    {
                        sys::cls();
                        return;
                    }
                    break;
                    case 'n':
                    case 'N':
                    {
                        sys::cls();
                        mostrar_casillero(tablero,fila,columna,aciertos,intento);

                    }
                    break;
                    default:
                    {
                        cout << "ingrese una opcion valida." << endl;
                    }
                    }
                }
                pos=validar_posicion(tablero,fila,columna);
                rep=validar_repetido(tablero,fila,columna);
                if(ban2>0)
                {
                    tir=validar_tiro(tablero,f1,c1,fila-1,columna-1);
                }
            }
            while((pos!=true)||(rep!=false)||(tir!=false));
            /* el ciclo termina cunado la fila y columna estan dentro
            de la matriz ,no acerto previamente, y no repite fila y columna dos veces*/
            sys::cls();
            if(ban2==0)
            {
                /**/
                f1=fila-1;
                c1=columna-1;
                ban2++;
            }
            else
            {
                f2=fila-1;
                c2=columna-1;
                comp_letras_facil(tablero,f1,c1,f2,c2,&aciertos);
            }
            //mostrar_tablero_facil(tablero);
            mostrar_casillero(tablero,fila,columna,aciertos,intento);
            intento-=1;
        }
        //si gana muestra el cartel de ganar

    }

}


//=============================================== ==============================
// FUNCION : void jugar()
// ACCION : nuestra los niveles de dificultad que posee el juego.
// PARAMETROS:
// DEVUELVE : nada.
// -----------------------------------------------------------------------------
void jugar()
{
    sys::cls();
    bool entrar=true;
    int opcion;
    while(entrar!=false)
    {
        menu_jugar();
        cout << "Ingrese una opcion: ";
        cin>>opcion;
        cin.ignore();
        switch(opcion)
        {
        case 1:
        {
            facil();/**/

        }
        break;
        case 2:
        {
            //moderado();/**/
        } break;
        case 3:
        {
            //dificil();/**/
        }
        break;
        case 4:
        {
            salir(&entrar);
        }
        break;
        default:
        {

        } break;
        }
    }

}

#endif // EJERCICIOS_H_INCLUDED
