#include "../common/sorter.cpp"

class BubbleSorter : public Sorter {
private:
	void swapByIndices(std::vector<int>& list, size_t i1, size_t i2) {
		if (list.size() > i1 && list.size() > i2) {
			int temp = list[i1];
			list[i1] = list[i2];
			list[i2] = temp;
		}
	}

public:
	BubbleSorter() : Sorter("bubble sort") {}

	void sort(std::vector<int>& list) {
		size_t max = list.size() - 1;
		while (max > 0) {
			for (size_t i = 0; i < max; ++i) {
				if (list[i] > list[i+1]) {
					swapByIndices(list, i, i+1);
				}
			}
			--max;
		}	
	}
};

int main(int argc, char *argv[]) {
	std::vector<int> list{1, 5, 6, 2, 1, 8, 9};
	BubbleSorter sorter = BubbleSorter();
	sorter.test(list);
}