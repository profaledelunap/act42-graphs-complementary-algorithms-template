// =========================================================
// File: DiGraphType.h
// Author:
// Date:
// =========================================================
#include <vector>
#include <set>
#include <stack>
#include <queue>
using namespace std;

/************************************************************/
/*********************** DiGraphType ***********************/
/********************* AdjecancyMatrix *********************/
/************************************************************/
template <class VertexType, class EdgeType>
class DiGraphType
{

public:
    void addVertex(VertexType);
    void removeVertex(VertexType);
    void addEdge(VertexType, VertexType, EdgeType);
    void removeEdge(VertexType, VertexType);

    int getSize();
    int getIndex(VertexType);
    vector<VertexType> getVertices();
    void getAdjacents(VertexType vertex, queue<VertexType> &);

    bool searchPath(VertexType, VertexType);
    void topologicalSort(stack<VertexType> &);
    bool isCyclic();

protected:
    int size;
    vector<VertexType> vertices;
    vector<vector<EdgeType>> edges;
    bool DFS(VertexType, VertexType);
    bool BFS(VertexType, VertexType);
    bool DFS(VertexType, vector<int> &);
    void DFS(VertexType, vector<bool> &, stack<VertexType> &);
};

/*
* Add a vertex to the graph.
*
* @param fromVertex vertex from  which the edge points from.
* @param toVertex vertex to  which the edge points towards.
*/
template <class VertexType, class EdgeType>
void DiGraphType<VertexType, EdgeType>::addVertex(VertexType vertex)
{
    vertices[size++] = vertex;

    for (int i = 0; i < size; i++)
    {
        edges[i][size] = 0;
        edges[size][i] = 0;
    }
}

/*
* Remove a vertex from the graph.
*
* @param vertex vertex to be deleted.
*/
template <class VertexType, class EdgeType>
void DiGraphType<VertexType, EdgeType>::removeVertex(VertexType vertex)
{
}

/*
* Add an edge to the graph.
*
* @param fromVertex vertex from  which the edge points from.
* @param toVertex vertex to  which the edge points towards.
* @param value value of the edge.
*/
template <class VertexType, class EdgeType>
void DiGraphType<VertexType, EdgeType>::addEdge(VertexType fromVertex, VertexType toVertex, EdgeType value)
{
    int row = getIndex(fromVertex);
    int col = getIndex(toVertex);

    edges[row][col] = value;
}

/*
* Remove an edge from the graph.
*
* @param fromVertex vertex from  which the edge points from.
* @param toVertex vertex to  which the edge points towards.
*/
template <class VertexType, class EdgeType>
void DiGraphType<VertexType, EdgeType>::removeEdge(VertexType fromVertex, VertexType toVertex)
{
}

/*
* Get the index of a vertex.
*
* @param vertex vertex to be located.
* @return index of the vertex.
*/
template <class VertexType, class EdgeType>
int DiGraphType<VertexType, EdgeType>::getIndex(VertexType vertex)
{
    for (int i = 0; i < size; i++)
    {
        if (vertices[i] == vertex)
        {
            return i;
        }
    }

    return -1;
}

/*
* Get the adjacent vertices of a vertex.
*
* @param vertex vertex to be analyzed.
* @return queue of adjacent vertices.
*/
template <class VertexType, class EdgeType>
void DiGraphType<VertexType, EdgeType>::getAdjacents(VertexType vertex, queue<VertexType> &adjacents)
{

    int fromIndex = getIndex(vertex);

    for (int toIndex = 0; toIndex < size; toIndex++)
    {
        if (edges[fromIndex][toIndex] != false && fromIndex != toIndex)
        {
            adjacents.push(vertices[toIndex]);
        }
    }
}

/*
* Get the vertices of the graph.
*
* @return vertices of the graph.
*/
template <class VertexType, class EdgeType>
vector<VertexType> DiGraphType<VertexType, EdgeType>::getVertices()
{
    return vertices;
}

/*
* Get the size of the graph, the number of vertices.
*
* @return size of the graph.
*/
template <class VertexType, class EdgeType>
int DiGraphType<VertexType, EdgeType>::getSize()
{
    return size;
}

/*
* Searches if a path exists between two vertices.
*
* @param startVertex vertex to start the search from.
* @param endVertex vertex to be arrived at.
* @return true if a path exists between the vertices, false otherwise.
*/
template <class VertexType, class EdgeType>
bool DiGraphType<VertexType, EdgeType>::searchPath(VertexType startVertex, VertexType endVertex)
{
    return true;
}

/*
* Topological sort of the graph.
*
* @param sort stack containing the topological sort of the graph.
*/
template <class VertexType, class EdgeType>
void DiGraphType<VertexType, EdgeType>::topologicalSort(stack<VertexType> &sort)
{
}

/*
* Checks if the directed graph is acyclic.
*
* @return true if the graph is acyclic, false otherwise.
*/
template <class VertexType, class EdgeType>
bool DiGraphType<VertexType, EdgeType>::isCyclic()
{
    return false;
}

/*
* Breadth first search for a path between to vertices.
*
* @param startVertex vertex to start the search from.
* @param endVertex vertex to be arrived at.
* @return true if a path exists between the vertices, false otherwise.
*/
template <class VertexType, class EdgeType>
bool DiGraphType<VertexType, EdgeType>::BFS(VertexType startVertex, VertexType endVertex)
{
    return false;
}

/*
* Depth first search for a path between to vertices.
*
* @param startVertex vertex to start the search from.
* @param endVertex vertex to be arrived at.
* @return true if a path exists between the vertices, false otherwise.
*/
template <class VertexType, class EdgeType>
bool DiGraphType<VertexType, EdgeType>::DFS(VertexType startVertex, VertexType endVertex)
{
    return false;
}

/*
* Depth first search for the topological sort of the graph.
*
* @param vertex vertex to be searched.
* @param visited boolean vector of visited vertices.
* @param sort stack for the topological sort.
*/
template <class VertexType, class EdgeType>
void DiGraphType<VertexType, EdgeType>::DFS(VertexType vertex, vector<bool> &visited, stack<VertexType> &sort)
{
}

/*
* Depth first search for a cycle in the graph.
*
* @param vertex vertex to start the search from.
* @param colors vector of possible color to keep control of the non-sivited (0),
* currently in search (1), already visited (2) vertices.
* @return true if a cycle was found, false otherwise.
*/
template <class VertexType, class EdgeType>
bool DiGraphType<VertexType, EdgeType>::DFS(VertexType vertex, vector<int> &colors)
{
    return false;
}
