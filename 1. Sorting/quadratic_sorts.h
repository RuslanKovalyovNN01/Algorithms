#pragma once

#include <vector>

template<typename T>
void bubble_sort(std::vector<T>& nums) {
	const int size = nums.size();
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < i; j++) {
			if (nums[j] > nums[i]) {
				std::swap(nums[i], nums[j]);
			}
		}
	}
}

template<typename T>
void selection_sort(std::vector<T>& nums) {
	const int size = nums.size();
	for (int i = 0; i < size; i++) {
		int index_min = i;
		for (int j = i + 1; j < size; j++) {
			if (nums[j] < nums[index_min]) {
				index_min = j;
			}
		}
		std::swap(nums[i], nums[index_min]);
	}
}
