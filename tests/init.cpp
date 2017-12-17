
#include <tree.hpp>
#include <catch.hpp>


SCENARIO("null")
{
	avl_tree<int, int> a;
	REQUIRE(a.isEmpty());
}
SCENARIO("add")
{
	avl_tree <int, int> a;
	a.insert(5, 6);
	REQUIRE(!a.isEmpty());
}
SCENARIO("BST delete non inserted element", "[delete]")
{
	avl_tree<int, int> tree = { {8, 7} };
	tree.remove(4);
	REQUIRE(!tree.isEmpty());
}
SCENARIO("BST delete root with one element", "[delete]")
{
	avl_tree<int, int> tree = { {8,8} };
	tree.remove(8);
	REQUIRE(tree.isEmpty());
}
