#include "NodoCircDobl.cpp"

class ListaCricDobl {
private:
    NodoCircDobl* cabeza;
    NodoCircDobl* cola;
    
public:
    ListaCricDobl() : cabeza(nullptr), cola(nullptr) {}

    void insertarNodo(int val) {
        NodoCircDobl* nuevoNodo = new NodoCircDobl(val);
        if (!cabeza) {
            cabeza = nuevoNodo;
            cola = nuevoNodo;
            cabeza->siguiente = cabeza;
            cabeza->anterior = cabeza;
        } else {
            nuevoNodo->anterior = cola;
            nuevoNodo->siguiente = cabeza;
            cola->siguiente = nuevoNodo;
            cabeza->anterior = nuevoNodo;
            cola = nuevoNodo;
        }
    }
    void eliminarNodo(int val) {
        if (cabeza == nullptr) return;

        NodoCircDobl* actual = cabeza;
        NodoCircDobl* anterior = cola;
        do {
            if (actual->dato == val) {
                if (actual == cabeza && actual == cola) {
                    cabeza = nullptr;
                    cola = nullptr;
                } else {
                    anterior->siguiente = actual->siguiente;
                    actual->siguiente->anterior = anterior;
                    if (actual == cabeza) cabeza = actual->siguiente;
                    if (actual == cola) cola = anterior;
                }
                delete actual;
                return;
            }
            anterior = actual;
            actual = actual->siguiente;
        } while (actual != cabeza);
    }
    void buscarNodo(int val) {
        if (cabeza == nullptr) return;

        NodoCircDobl* actual = cabeza;
        do {
            if (actual->dato == val) {
                // Nodo encontrado
                return;
            }
            actual = actual->siguiente;
        } while (actual != cabeza);
    }

};
