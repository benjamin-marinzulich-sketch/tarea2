#include "NodoDobl.cpp"

class ListaDoble {
private:
    NodoDobl* cabeza;
    NodoDobl* cola;    
public:
    ListaDoble() : cabeza(nullptr), cola(nullptr) {}

    void insertarAlFinal(int valor) {
        NodoDobl* nuevoNodo = new NodoDobl(valor);

        if (cabeza == nullptr) {
            cabeza = nuevoNodo;
            cola = nuevoNodo;
        } else {
            cola->siguiente = nuevoNodo;
            nuevoNodo->anterior = cola;
            cola = nuevoNodo;
        }
    }
    void EliminarNodo(int valor){
        if(cabeza == nullptr){
            return;
        }

        if(cabeza->dato == valor){
            NodoDobl* aux = cabeza;
            cabeza = cabeza->siguiente;
            cabeza->anterior = nullptr;
            delete aux;
        }

        NodoDobl* actual = cabeza->siguiente;
        
        while(actual!= nullptr){

            if(actual->dato == valor){
                NodoDobl* prev = actual->anterior;
                NodoDobl* pos = actual->siguiente;

                if(pos != nullptr){
                    pos->anterior = prev;
                }
                prev->siguiente = pos;

                delete actual;
                return;
            }

            actual = actual->siguiente;
            

        }
        return;
    }
    NodoDobl* buscarNodo(int valor){


        NodoDobl* actual = cabeza;

        while(actual!=nullptr){
            if(actual->dato== valor){
                return actual;
            }
            actual = actual->siguiente;
        }
        return nullptr;
    }

};