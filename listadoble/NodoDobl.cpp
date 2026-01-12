
class NodoDobl {
public:
    int dato;
    NodoDobl* siguiente;
    NodoDobl* anterior;

    NodoDobl(int valor) : dato(valor), siguiente(nullptr), anterior(nullptr) {}
};