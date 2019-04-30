#include <string>

#include "common.cpp"

class Sorter {
private:
	std::string name;

	virtual void swapByIndices(std::vector<int>& list, size_t i1, size_t i2) {
		// overridden by inheriting sorters
	}

public:
	Sorter(std::string _name) : name(_name) {}

	virtual void sort(std::vector<int>& list) {
		// overridden by inheriting sorters
	}

	void test(std::vector<int>& list) {
		common::printVector(list);
		std::cout << "applying " << name << std::endl;
		sort(list);
		common::printVector(list);
	}
};