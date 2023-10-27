#if !defined(NODE_HPP)
#define NODE_HPP

#include <vector>

using namespace std;

template <typename T>
class Node
{
public:
    T value;

    // Para cuando tengan que almacenar información de los pesos de las aristas.
    // pueden utilizar un vector de pares o crear una clase Edge que tenga un
    // atributo weight y nodo destino.
    vector<Node> neighbors;

    // Abreviación para el constructor de la clase.
    Node(T val) : value(val) {}
};

#endif // NODE_HPP
