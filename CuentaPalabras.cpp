#include <iostream>
#include <sstream> // Para std::istringstream
#include <string>

using namespace std;

// Declaración de funciones
void buscarPalabras();

int main(){
    buscarPalabras();
    return 0;
}

// Función para buscar y contar palabras en la cadena
void buscarPalabras() {
    string cadena;
    cout << "Cadena a buscar: ";
    getline(cin, cadena);

    // Contar palabras en la cadena
    istringstream stream(cadena); //lee y almacena la variable desde externo
    string palabra;
    int contadorPalabras = 0;

    while (stream >> palabra) { //lee variables con el operador de extraccion
        contadorPalabras++;
    }

    cout << "La cadena ingresada es: " << cadena << endl;
    cout << "Número de palabras: " << contadorPalabras << endl;
}


//Lee una cadena con espacios
/*cout << "Cadena a buscar: ";
    getline(cin, cadena);
    cout << "La cadena ingresada es: " << cadena << endl;*/

//Busca en una cadena con espacios
/*for(int i=0; i<30;i++){
        switch(cadena[i] ){
            case ' ': espa++; 
            break;
        }
    }*/