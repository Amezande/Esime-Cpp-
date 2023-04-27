//........................................Spotify...........................................................

/*Hacer un spotify
Reproducir
secuencial
aleatoria

insertar final
insertar al inicio
eliminar
ver letras 
agregar a favoritos
anterior 
siguiente
como reproducir un archivoÂ desdeÂ c++
*/


#include<iostream>
#include<time.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>


using namespace std;

struct nodo
{
	int dato;
	nodo*sig,*ant;
};

//......................Funciones de nodos.................................



//.............................Programa principal...................................................

int main(){
    int opc,letra;

    while (1){
        regresa:

        cout<<"______________"<<endl;
        cout<<"   Spotify"<<endl;
        cout<<"______________\n"<<endl;
        cout<<"1- Reproduccion secuencial."<<endl;
        cout<<"2-.Reproduccion aleatoria"<<endl;
        cout<<"3-.Eliminar"<<endl;
        cout<<"4-.Ver letras"<<endl;
        cout<<"5-.AÃ±adir a favoritos"<<endl;
        cout<<"6-.Anterior"<<endl;
        cout<<"______________"<<endl;
        cout<<"Ingresa una opcion:";
        cin>>opc;

        switch(opc){

            case 1:
			PlaySound(TEXT("ELLA.wav"),NULL,SND_ASYNC);
            break;
            case 2:
            break;
            case 3:
            break;
            case 4:
            while(1){
                cout<<"_____________________________"<<endl;
                cout<<"   Letras de las canciones"<<endl;
                cout<<"_____________________________\n"<<endl;
                cout<<"1-. Basilisco"<<endl;
                cout<<"2-. Cafune"<<endl;
                cout<<"3-. A mis enemigos"<<endl;
		cout<<"4-. Ella baila sola";
                cout<<"5-. Salir"<<endl;
                cout<<"Ingrese una opcion:";
                cin>>letra;

                switch(letra){
                    case 1:
                    cout<<"________________"<<endl;
                    cout<<"Basilisco Proof"<<endl;
                    cout<<"________________"<<endl;
                    cout<<"Hace tiempo me estoy rompiendo veo grietas hasta en las pÃ¡ginas \nBuscando la salida de estÃ¡ jodida crisÃ¡lida\nTodo camino es duro a si ninguna excusa es vÃ¡lida\nEstÃ¡s plantas de papel las estoy usando de sÃ¡bilas\nY no te estoy mintiendo tÃº sabes que asÃ­ es la vida\nQuÃ© vas perdiendo y perdiendo hasta que ganas perspectiva\nSigo siendo de la idea de darle siempre para arriba\nQuererse comer el mundo quÃ© cosa tan nutritiva\nY ya sÃ© que cuesta trabajo y ademÃ¡s tiempo y dinero\nPero algo tienes que hacer antes de quÃ© otra vez sea enero\nA mÃ­ ahora ya me ves tranquilo entre el humo y el cenicero\nPero tengo mis historias igual que los marineros\nHe visto muchas cosas hermano pa que te cuento\nHe dado muchas cosas en vano en los viejos tiempos\nHe viajado al pasado para sentirme contento\nPero ya no habÃ­a nada como cuando fui al desierto"<<endl;
                    break;
                    case 2:
                    cout<<"________________"<<endl;
                    cout<<"     Cafune "<<endl;
                    cout<<"________________"<<endl;
                    break;
                    case 3:
                    cout<<"________________"<<endl;
                    cout<<" A mis enemigos"<<endl;
                    cout<<"________________"<<endl;
                    break;
                    case 4: goto regresa;
                }
            }
            break;
            case 5:
            break;
            case 6:
            break;
            case 7:
            break;
        }
    }
}
