
#include <tree.hpp>
#include <catch.hpp>


SCENARIO("null")
{
	avl_tree<int, int> a;
	REQUIRE(a.isEmpty());
}
SCENARIO("add")
{
	RBtree <int, int> a;
	a.insert(5, 6);
	REQUIRE(!a.isEmpty());
}
SCENARIO("BST delete non inserted element", "[delete]")
{
	RBtree<int, int> tree = { {8, 7} };
	tree.Remove(4);
	REQUIRE(!tree.isEmpty());
}
SCENARIO("BST delete root with one element", "[delete]")
{
	RBtree<int, int> tree = { {8,8} };
	tree.Remove(8);
	REQUIRE(tree.isEmpty());
}
