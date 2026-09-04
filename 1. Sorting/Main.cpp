#include <algorithm>
#include <iostream>
#include <vector>
#include <cctype>

#include "nlog_sorts.h"
#include "quadratic_sorts.h"

int main() {
	std::vector<int> a = { 7,6,5,4,3,4,5,6 };
	merge_sort(0, a.size() - 1, a);
	for (int i = 0; i < a.size(); i++) {
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
	std::vector<int> b = { 7,6,5,4,3,4,5,6 };
	quick_sort(0, b.size() - 1, b);
	for (int i = 0; i < b.size(); i++) {
		std::cout << b[i] << " ";
	}
	std::cout << std::endl;
	std::vector<int> c = { 7,6,5,4,3,4,5,6 };
	bubble_sort(c);
	for (int i = 0; i < c.size(); i++) {
		std::cout << c[i] << " ";
	}
	std::cout << std::endl;
	// std::vector<double> b = { 4.0 , 4.2 , 5.0, 2.1 };
	return 0;
}