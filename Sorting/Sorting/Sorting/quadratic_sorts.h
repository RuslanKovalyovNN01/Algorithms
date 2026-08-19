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
