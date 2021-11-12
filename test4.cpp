#define CATCH_CONFIG_MAIN
#include <iostream>
#include "catch.h"
#include "unweightedDiGraph.h"

using namespace std;

TEST_CASE("testing exercise 3", "[exercise3]")
{
	unweightedDiGraph<string> myGraph(10);
	stack<string> mySort;
	int index = 0;
	vector<string> sort = {"CDMX", "Valle de Bravo", "Tijuana", "Torreon", "Saltillo", "Monterrey", "Durango"};

	myGraph.addVertex("Tijuana");
	myGraph.addVertex("Saltillo");
	myGraph.addVertex("Durango");
	myGraph.addVertex("Torreon");
	myGraph.addVertex("Monterrey");

	myGraph.addEdge("Monterrey", "Saltillo");
	myGraph.addEdge("Saltillo", "Torreon");
	myGraph.addEdge("Torreon", "Tijuana");
	myGraph.addEdge("Monterrey", "Durango");
	myGraph.addEdge("Durango", "Monterrey");

	myGraph.topologicalSort(mySort);

	while (!mySort.empty())
	{
		REQUIRE(mySort.top() == sort[index++]);
		mySort.pop();
	}
}
