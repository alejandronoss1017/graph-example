#if !defined(GRAPH_HPP)
#define GRAPH_HPP

#include "node/Node.hpp"

#include <vector>

using namespace std;

template <typename T>
class Graph
{
public:
    vector<Node<T>> nodes;

    Graph();

    void addNode(Node<T> node);

    // Método para agregar una arista entre dos nodos.
    // Recibe como parámetros dos referencias a nodos.
    // Importante definir que sean referencias, ya que si no, se crearían copias de los nodos.
    void addEdge(Node<T> &node1, Node<T> &node2);
};

#include "Graph.hxx"

#endif // GRAPH_HPP
