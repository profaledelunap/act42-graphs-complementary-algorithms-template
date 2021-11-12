#define CATCH_CONFIG_MAIN
#include <iostream>
#include "catch.h"
#include "unweightedDiGraph.h"

using namespace std;

TEST_CASE("testing exercise 2", "[exercise2]")
{
	unweightedDiGraph<string> myGraph(10);

	myGraph.addVertex("Tijuana");
	myGraph.addVertex("Saltillo");
	myGraph.addVertex("Durango");
	myGraph.addVertex("Torreon");
	myGraph.addVertex("Monterrey");
	myGraph.addVertex("CDMX");
	myGraph.addVertex("Valle de Bravo");

	myGraph.addEdge("Monterrey", "Saltillo");
	myGraph.addEdge("Saltillo", "Torreon");
	myGraph.addEdge("Torreon", "Tijuana");
	myGraph.addEdge("CDMX", "Valle de Bravo");

	SECTION("Remove vertex Saltillo")
	{
		myGraph.removeVertex("Saltillo");
		queue<string> adjacents;
		myGraph.getAdjacents("Monterrey", adjacents);

		REQUIRE(myGraph.getSize() == 6);
		REQUIRE(adjacents.empty());
	}

	SECTION("Remove vertex Valle de Bravo")
	{
		myGraph.removeVertex("Valle de Bravo");
		queue<string> adjacents;
		myGraph.getAdjacents("CDMX", adjacents);

		REQUIRE(myGraph.getSize() == 6);
		REQUIRE(adjacents.empty());
	}
}
