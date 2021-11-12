#define CATCH_CONFIG_MAIN
#include <iostream>
#include "catch.h"
#include "unweightedDiGraph.h"

using namespace std;

TEST_CASE("testing exercise 1", "[exercise1]")
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
	myGraph.addEdge("Monterrey", "Durango");
	myGraph.addEdge("Durango", "Monterrey");
	myGraph.addEdge("CDMX", "Valle de Bravo");

	SECTION("Remove edge Monterrey - Saltillo")
	{
		myGraph.removeEdge("Monterrey", "Saltillo");
		REQUIRE(myGraph.searchPath("Monterrey", "Saltillo") == false);
	}

	SECTION("Remove edge CDMX - Valle de Bravo")
	{
		myGraph.removeEdge("CDMX", "Valle de Bravo");
		REQUIRE(myGraph.searchPath("CDMX", "Valle de Bravo") == false);
	}
}
