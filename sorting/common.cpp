#include <vector>
#include <iostream>

namespace common {
	template<class T>
	void printVector(std::vector<T>& list) {
		std::cout << "list: ";
		for (size_t i = 0; i < list.size() - 1; ++i) {
			std::cout << list[i] << " ";
		}
		std::cout << list[list.size() - 1] << std::endl;
	}
}