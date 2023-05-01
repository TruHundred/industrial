#include <iostream>
#include "Set.h"
using namespace std;
int main() {
	Set<int> intSet(10);
	intSet.Add(3);
	intSet.Add(5);
	intSet.Add(3);
	std::cout << intSet.Is_Empty() << std::endl; // 0
	std::cout << intSet.In_Set(5) << std::endl; // 1
	std::cout << intSet.In_Set(7) << std::endl; // 0
	std::cout << intSet.Get(5) << std::endl; // 5
	std::cout << intSet.In_Set(5) << std::endl; // 0
	std::cout << intSet.Is_Full() << std::endl; // 0
	intSet.Add(1);
	intSet.Add(2);
	intSet.Add(4);
	intSet.Add(6);
	intSet.Add(7);
	intSet.Add(8);
	intSet.Add(9);
	intSet.Add(10);
	std::cout << intSet.Is_Full() << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << intSet[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}
