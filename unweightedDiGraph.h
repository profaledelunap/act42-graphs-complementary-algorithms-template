#include "DiGraphType.h"

/***********************************************************/
/******************** UnweightedDiGraph ********************/
/********************* AdjecancyMatrix *********************/
/***********************************************************/
template <class VertexType>
class unweightedDiGraph : public DiGraphType<VertexType, bool>
{
public:
    unweightedDiGraph(int max);
    void addEdge(VertexType fromVertex, VertexType toVertex);
};

/*
* Constructor. Initializes the vertices list and adjacency matrix
* of the graph to a size max.
*
* @param max maximum number of elements that will be stored in the
* graph.
*/
template <class VertexType>
unweightedDiGraph<VertexType>::unweightedDiGraph(int max)
{
    this->size = 0;
    this->vertices.resize(max);
    this->edges.resize(max);

    for (int i = 0; i < max; i++)
    {
        this->edges[i].resize(max, false);
    }
}

/*
* Add an edge to the graph.
*
* @param fromVertex vertex from  which the edge points from.
* @param toVertex vertex to  which the edge points towards.
*/
template <class VertexType>
void unweightedDiGraph<VertexType>::addEdge(VertexType fromVertex, VertexType toVertex)
{
    DiGraphType<VertexType, bool>::addEdge(fromVertex, toVertex, true);
}