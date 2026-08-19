#include <algorithm>
#include <iostream>
#include <vector>
#include <cctype>

#include "nlog_sorts.h"

int main() {
	std::vector<int> a = { 7,6,5,4,3,4,5,6 };
	merge_sort(0, a.size() - 1, a);
	for (int i = 0; i < a.size(); i++) {
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}