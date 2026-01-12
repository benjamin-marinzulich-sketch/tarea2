#include "Nodo.cpp"
class ListaSimple{
    private:
        Nodo* head;
    public:

        ListaSimple() : head(nullptr) {}

        void InsertarNodo(int valor){
            Nodo* nuevo = new Nodo(valor);

            if(head == nullptr){
                head = nuevo;
                return;
            }

            Nodo* actual = head;

            while(actual->siguiente!= nullptr){

                actual = actual->siguiente;

            }

            actual->siguiente = nuevo;
        }
        void EliminarNodo(int valor){

            if(head == nullptr){
                return;
            }else if(head->dato == valor){
                Nodo* aux = head;
                head = head->siguiente;
                delete aux;
                return;
            }

            Nodo* prev = head;
            Nodo* actual = prev->siguiente;
  
            while(actual!= nullptr){

                if(actual->dato == valor){
                    prev->siguiente = actual->siguiente;
                    delete actual;
                    return;
                }

                prev = actual;
                actual = actual->siguiente;
            }


            return;
        }
        Nodo* buscar(int valor){    
            Nodo* actual = head;

            while(actual != nullptr){
                if(actual->dato == valor){
                    return actual;
                }

                actual = actual->siguiente;
            }

            return nullptr;

        }

};