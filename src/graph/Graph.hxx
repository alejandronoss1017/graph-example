#include "Graph.hpp"

template <typename T>
Graph<T>::Graph()
{
    nodes = vector<Node<T>>();
}

template <typename T>
void Graph<T>::addEdge(Node<T> &node1, Node<T> &node2)
{
    node1.neighbors.emplace_back(node2);
}

template <typename T>
void Graph<T>::addNode(Node<T> node)
{
    nodes.emplace_back(node);
}