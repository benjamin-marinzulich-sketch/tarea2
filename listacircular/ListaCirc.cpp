#include "NodoCirc.cpp"

class ListaCirc{
    private:
        NodoCirc* cabeza;
    public:
        ListaCirc() : cabeza(nullptr) {}

        void insertar(int valor) {
        
            NodoCirc* nuevoNodo = new NodoCirc(valor);
            if (cabeza == nullptr) {
                cabeza = nuevoNodo;
                nuevoNodo->siguiente = cabeza;
            }else{
                NodoCirc* actual = cabeza;
                while(actual->siguiente != cabeza){
                    actual= actual->siguiente;
                }
                actual->siguiente = nuevoNodo;
                nuevoNodo->siguiente = cabeza;
            }
        }
        void EliminarNodo(int valor){

            if(cabeza == nullptr){
                return;
            }

            if (cabeza->dato == valor && cabeza->siguiente == cabeza) {
                delete cabeza;
                cabeza = nullptr;
                return;
            }

            if(cabeza->dato == valor){
                NodoCirc* actual = cabeza;
                while(actual->siguiente != cabeza){
                    actual = actual->siguiente;
                }
                NodoCirc* aux = cabeza;
                actual->siguiente =cabeza->siguiente;
                cabeza = cabeza->siguiente;
                delete aux;
                return;
            }

            NodoCirc* temp = cabeza->siguiente;
            NodoCirc* prev = cabeza;

            while(temp != cabeza){

                if(temp->dato == valor){
                    prev->siguiente = temp->siguiente;
                    delete temp;
                    return;
                }
                prev = temp;
                temp = temp->siguiente;

            }
    
            return;

        }
        NodoCirc* buscar(int valor){
            
            if(cabeza == nullptr){
                return nullptr;
            }
            
            if(cabeza->dato == valor){
                return cabeza;
            }

            NodoCirc* actual = cabeza->siguiente;
            while(actual!= cabeza){
                if(actual->dato == valor){
                    return actual;
                }
                actual = actual->siguiente;

            }
            return nullptr;
        }


};