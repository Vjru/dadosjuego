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
void Estadisticas ( int )

	int actu[5] = {};
	int i, j, aux;

	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			if(actu[j] > actu[j+1]){
				aux = actu[j];
				actu[j] = actu[j+1];
				actu[j+1] = aux;
			}
		}
	}

	cout<<"Los puntajes mas altos son: ";
	for(i=0;i<5;i++){
		cout<<actu[i]<<endl;
	}

void Jugador (char []){

    int tirada, i, n[6], x,bloq,db[3],punt,puntUNO,opcion, puntotal, puntr1;
    int puntr2, puntr3;
    char cadena[30];
    char cadena2[30];
    poner_ceroB (db, 3);
    poner_ceroD (n, 6);
    punt=0;
    puntUNO=0;
    cout << "Ronda 1" << endl;
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

        const int tam = 5;
        int cant_dados = 5;

//-----------------------------------------------------------------------

        while (tirada == 1){

      cout << endl << endl;


          if (tirada == 1){
              for (i=0; i<cant_dados; i++){
                  n[i] = 1 + (rand() % 6 );

                  cout << n[i] << endl;

                 if (n[i] == db[0] || n[i] == db [1]){
                cant_dados--;
                  puntUNO = n[i] + puntUNO;

                 }

                  punt += n[i] ;

                  msleep(300);
              }
          }

            puntr1 = punt - puntUNO;
              cout << endl << endl;
              cout << endl << "SCORE >> " << puntr1;
              cout << endl << endl;

              if (cant_dados > 0){

                cout << "Presione 1 si quieres seguir tirando sino 2: ";
                cin >> tirada;}
                else {
                    cout << "no le quedan mas dados presione 2 para siguiente ronda ";
                    puntr1 = 0;}
 }

//----------------------------------------------------------------------------------
    punt=0;
    puntUNO=0;

        cout << "RONDA 2" << endl;
        cout << "presion 1 para tirar bloqueadores ";
        cin >> bloq;
         if (bloq == 1){
              for (x=0; x<2; x++){
                  db[x] = 1 + (rand() % 6 );
                  cout <<  db[x] << endl;
                  msleep(300);
              }
          }
      cout << endl << endl;
      cout << "presione 1 para tirar dados" << endl;
      cin >> tirada;
        while (tirada == 1){


          if (tirada == 1){
              for (i=0; i<cant_dados; i++){
                  n[i] = 1 + (rand() % 6 );

                  cout << n[i] << endl;

                 if (n[i] == db[0] || n[i] == db [1]){
                cant_dados--;
                  puntUNO = n[i] + puntUNO;

                 }

                  punt += n[i] ;

                  msleep(300);
              }
          }
            puntr2 = punt - puntUNO;
              cout << endl << endl;
              cout << endl << "SCORE >> " << puntr2;
              cout << endl << endl;

              if (cant_dados > 0){

                cout << "Presione 1 si quieres seguir tirando sino 2: ";
                cin >> tirada;}
                else {
                    cout << "no le quedan mas dados presione 2 para siguiente ronda";
                    puntr2 = 0;}





        }

//----------------------------------------------------------------------------------
    punt=0;
    puntUNO=0;

        cout << "RONDA 3" << endl;
        cout << "presion 1 para tirar bloqueadores ";
        cin >> bloq;
         if (bloq == 1){
              for (x=0; x<2; x++){
                  db[x] = 1 + (rand() % 6 );
                  cout <<  db[x] << endl;
                  msleep(300);
              }
          }
      cout << endl << endl;
      cout << "presione 1 para tirar dados" << endl;
      cin >> tirada;
        while (tirada == 1){


          if (tirada == 1){
              for (i=0; i<cant_dados; i++){
                  n[i] = 1 + (rand() % 6 );

                  cout << n[i] << endl;

                 if (n[i] == db[0] || n[i] == db [1]){
                cant_dados--;
                  puntUNO = n[i] + puntUNO;

                 }


                  punt += n[i] ;

                  msleep(300);
              }
          }

            puntr3 = punt - puntUNO;
              cout << endl << endl;
              cout << endl << "SCORE >> " << puntr3;
              cout << endl << endl;

              if (cant_dados > 0){

                cout << "Presione 1 si quieres seguir tirando sino 2 para finalizar: ";
                cin >> tirada;}
                else {
                    cout << "no le quedan mas dados presione 2 para finalizar";
                    cin >> tirada;
                    puntr3 = 0;}


        }

//----------------------------------------------------------------------------------


cout << "juego finalizado" << endl;
cout << "puntuacion total de: " << endl;
puntotal = puntr1 + puntr2 + puntr3;
msleep(600);
cout << puntotal;
}



