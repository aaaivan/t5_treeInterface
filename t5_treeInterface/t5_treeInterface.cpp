#include "Tree.h"

int main()
{
	Tree<int> t1;
	t1.add(5);
	t1.add(9);
	t1.add(2);
	t1.add(1);
	t1.add(0);
	t1.add(10);

	//copy constructor
	Tree<int> t2(t1);
	t2.add(-2);

	t1.print();
	std::cout << "\n";
	t2.print();
	std::cout << "\n";
	std::cout << "\n";

	//copy assignment
	t1 = t2;
	t1.print();
	std::cout << "\n";
	t2.print();
	std::cout << "\n";
	std::cout << "\n";
}
