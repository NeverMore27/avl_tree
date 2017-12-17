
#include <tree.hpp>
#include <catch.hpp>


SCENARIO("null")
{
	avl_tree<int, int> a;
	REQUIRE(a.isEmpty());
}