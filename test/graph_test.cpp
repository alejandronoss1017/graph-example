// This tells Catch to provide a main() - only do this in one cpp file
#define CATCH_CONFIG_MAIN
// This includes the catch.hpp file
#include "../lib/catch.hpp"

#include <map>

#include "../src/graph/Graph.hpp"

// Create a test case
TEST_CASE("Graph relationships")
{

    Graph<int> myTestGraph;

    // Create a section, this is just to organize your tests
    SECTION("Adding relationships")
    {

        map<int, vector<int>> myRightMap;

        myRightMap.insert(make_pair(1, vector<int>{2, 3, 4}));
        myRightMap.insert(make_pair(2, vector<int>{5, 6}));
        myRightMap.insert(make_pair(3, vector<int>{7, 8}));
        myRightMap.insert(make_pair(4, vector<int>{9, 10}));

        INFO("Adding nodes");
        
        myTestGraph.addNode(1);
        myTestGraph.addNode(2);
        myTestGraph.addNode(3);
        myTestGraph.addNode(4);
        myTestGraph.addNode(5);
        myTestGraph.addNode(6);
        myTestGraph.addNode(7);
        myTestGraph.addNode(8);
        myTestGraph.addNode(9);
        myTestGraph.addNode(10);

        INFO("Adding relationships");

        Node<int> &node1 = myTestGraph.nodes[0];
        Node<int> &node2 = myTestGraph.nodes[1];
        Node<int> &node3 = myTestGraph.nodes[2];
        Node<int> &node4 = myTestGraph.nodes[3];
        Node<int> &node5 = myTestGraph.nodes[4];
        Node<int> &node6 = myTestGraph.nodes[5];
        Node<int> &node7 = myTestGraph.nodes[6];
        Node<int> &node8 = myTestGraph.nodes[7];
        Node<int> &node9 = myTestGraph.nodes[8];
        Node<int> &node10 = myTestGraph.nodes[9];

        myTestGraph.addEdge(node1, node2);
        myTestGraph.addEdge(node1, node3);
        myTestGraph.addEdge(node1, node4);
        myTestGraph.addEdge(node2, node5);
        myTestGraph.addEdge(node2, node6);
        myTestGraph.addEdge(node3, node7);
        myTestGraph.addEdge(node3, node8);
        myTestGraph.addEdge(node4, node9);
        myTestGraph.addEdge(node4, node10);

        map<int, vector<int>> myMap;

        for (const Node<int> &node : myTestGraph.nodes)
        {
            for (const Node<int> &neighbor : node.neighbors)
            {
                myMap[node.value].push_back(neighbor.value);
            }
        }

        REQUIRE(myMap == myRightMap);
    }
}