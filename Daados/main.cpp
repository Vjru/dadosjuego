#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>
#include "rlutil.h"
using namespace rlutil;
#include <cstring>
#include "funciones.h"
int main()
{
    srand (time(NULL));
    int tirada, i, x ,n[10],b1,b2,bloq,db[10],punt,puntUNO,game,game1,opcion;
    char cadena[30];
    char cadena2[30];
    poner_ceroB (db, 10);
    poner_ceroD (n, 10);
    punt=0;
    puntUNO=0;

    do{
        cls();
        setColor(WHITE);
cout << "        GREED          " << endl;
cout << "-----------------------" << endl;
cout << "1 - MODO UN JUGADOR    " << endl;
cout << "2 - MODO DOS JUGADORES " << endl;
cout << "3 - ESTADISTICAS       " << endl;
cout << "4 - CREDITOS           " << endl;
cout << "-----------------------" << endl;
cout << "0 - SALIR              " << endl << endl << endl;
cout << "Ingrese opcion: ";

        cin >> opcion;

        switch(opcion){
            case 1:
                cout << endl << "Ingrese nombre" << endl;
                cin.getline (cadena, 30);
                cout << endl;
                Jugador (cadena);
            break;
            case 2:
                cout << "Ingrese nombres" << endl;
                cin.getline(cadena, 30);
                cin.getline(cadena2, 30);
                //Jugadores(vanio, 5);
            break;
            case 3:
                Estadisticas (int);
            break;
            case 4:
                cout << "##########################" << endl;
                cout << "##########################" << endl;
                cout << "###### Moreyra Juan ######" << endl;
                cout << "##########################" << endl;
                cout << "##########################" << endl;
            break;
            case 0:
                exit (0);
            break;
        }
        cin.ignore();
        anykey();
    }while(opcion != 0);

    return 0;
}

