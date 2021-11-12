#define CATCH_CONFIG_MAIN
#include <iostream>
#include "catch.h"
#include "unweightedDiGraph.h"

using namespace std;

TEST_CASE("testing exercise 3", "[exercise3]")
{
	unweightedDiGraph<string> myGraph(10);

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

	SECTION("Is cyclic")
	{
		REQUIRE(myGraph.isCyclic() == true);
	}

	SECTION("Is cyclic, after removing edge")
	{
		myGraph.removeEdge("Durango", "Monterrey");
		REQUIRE(myGraph.isCyclic() == false);
	}
}
