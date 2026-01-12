
class NodoCircDobl {
public:
    int dato;
    NodoCircDobl* siguiente;
    NodoCircDobl* anterior; 

    NodoCircDobl(int val) : dato(val), siguiente(nullptr), anterior(nullptr) {}
};
