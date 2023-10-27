#include <iostream>

#include "graph/Graph.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Graph<int> myGraph;

    // Agregar nodos al grafo
    myGraph.addNode(1);
    myGraph.addNode(2);
    myGraph.addNode(3);
    myGraph.addNode(4);
    myGraph.addNode(5);
    myGraph.addNode(6);

    Node<int> &node1 = myGraph.nodes[0];
    Node<int> &node2 = myGraph.nodes[1];
    Node<int> &node3 = myGraph.nodes[2];
    Node<int> &node4 = myGraph.nodes[3];
    Node<int> &node5 = myGraph.nodes[4];
    Node<int> &node6 = myGraph.nodes[5];


    // Conectar nodos con aristas
    myGraph.addEdge(node1, node2);

    myGraph.addEdge(node2, node3);
    myGraph.addEdge(node2, node4);
    myGraph.addEdge(node2, node6);

    myGraph.addEdge(node3, node5);

    myGraph.addEdge(node4, node5);

    myGraph.addEdge(node5, node2);

    myGraph.addEdge(node6, node2);

    for (const Node<int> &node : myGraph.nodes)
    {
        for (const Node<int> &neighbor : node.neighbors)
        {
            cout << node.value << " -> " << neighbor.value << endl;
        }
    }

    return 0;
}
