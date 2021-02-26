#include <iostream>
using namespace std;
#include <cstring>
#include "rlutil.h"
using namespace rlutil;
#include "funciones.h"

void poner_ceroD(int vec[], int tam){
    int i;
    for(i=0; i<tam; i++){

        vec[i] = 0;

    }
}

void poner_ceroB(int vec[], int tam){
    int i;
    for(i=0; i<tam; i++){

        vec[i] = 0;

    }
}

void Jugador (char []){

    int tirada, i, x ,n[6],b1,b2,bloq,db[3],punt,puntUNO,game,game1,opcion;
    char cadena[30];
    char cadena2[30];
    poner_ceroB (db, 3);
    poner_ceroD (n, 6);
    punt=0;
    puntUNO=0;
    const int tam = 5;
    int cant_dados = 5, vdados[tam];
    cout << "ingrese 1 para tirar 2 dados bloqueadores >> ";
    cin >> bloq;
      if (bloq == 1){
              for (x=0; x<2; x++){
                  db[x] = 1 + (rand() % 6 );
                  cout <<  db[x] << endl;
                  msleep(300);
              }
          }



      cout << "Ingrese 1 para tirar dados >>  ";
      cin >> tirada;

        while (bloq == 1){

      cout << endl << endl;


          if (tirada == 1){
              for (i=0; i<5; i++){
                  n[i] = 1 + (rand() % 6 );

                 if ( n[i] == db[0] ){
                  puntUNO = n[i] + puntUNO;
                 }
                 if (n[i] == db [1]){
                  puntUNO = n[i] + puntUNO;
                 }

                  punt += n[i] ;
                  cout << n[i] << endl;

                  msleep(300);
              }
          }

              cout << endl << endl;

              cout << endl << "SCORE >> " << punt - puntUNO;

              cout << endl << endl;



            cout << "Presione 1 si quieres seguir tirando: ";

            cin >> tirada;

        }

}

