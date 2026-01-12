#include <iostream>
#include "listasimple/listaSimple.cpp"
#include "listadoble/ListaDoble.cpp"
#include "listaCirDobl/ListaCricDobl.cpp"
#include "listacircular/ListaCirc.cpp"

using namespace std;

int main() {
    // Ejemplo de uso de Lista Simple
    ListaSimple listaSimple;
    listaSimple.InsertarNodo(10);
    listaSimple.InsertarNodo(20);
    listaSimple.EliminarNodo(10);
    Nodo* encontradoSimple = listaSimple.buscar(20);
    if (encontradoSimple) {
        cout << "Nodo encontrado en Lista Simple: " << encontradoSimple->dato << endl;
    }

    // Ejemplo de uso de Lista Doble
    ListaDoble listaDoble;
    listaDoble.insertarAlFinal(30);
    listaDoble.insertarAlFinal(40);
    listaDoble.EliminarNodo(30);
    NodoDobl* encontradoDoble = listaDoble.buscarNodo(40);
    if (encontradoDoble) {
        cout << "Nodo encontrado en Lista Doble: " << encontradoDoble->dato << endl;
    }

    // Ejemplo de uso de Lista Circular Doble
    ListaCricDobl listaCircDobl;
    listaCircDobl.insertarNodo(50);
    listaCircDobl.insertarNodo(60);
    listaCircDobl.eliminarNodo(50);
    listaCircDobl.buscarNodo(60);

    // Ejemplo de uso de Lista Circular Simple
    ListaCirc listaCirc;
    listaCirc.insertar(70);
    listaCirc.insertar(80);
    listaCirc.EliminarNodo(70);

    return 0;
}