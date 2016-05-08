#ifndef _DATA_STRUCTURE_H__
#define _DATA_STRUCTURE_H__

#include <iostream>
#include <list>

namespace data_structure
{
  // \class A class for graph structure
  class Graph
  {
    // number of vertices
    int num_vertices_; 
    // pointer to the list of Integer
    std::list<int> *node_;
    // 
    void recursive_DFS(int s, bool visited[]);

  public:
    // Constructor
    // \param[in] num_vertices Number of vertices
    Graph(int num_vertices);
    // Add an edge to the graph
    // \param[in] v a vertex
    // \param[in] w another vertex
    void add_edge(int v, int w);
    // Print BFS traversal from a given source vertex s
    void BFS(int s);
    // Print DFS traversal from a given source vertex, s
    void DFS(int s);
  };
}

#endif // data_structure


