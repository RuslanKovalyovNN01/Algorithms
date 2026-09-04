#pragma once

#include <iostream>
#include <vector>

template<typename T>
void merge(int l1, int r1, int l2, int r2, std::vector<T>& nums) {
	int ind1 = l1;
	int ind2 = l2;
	std::vector<T> temp;
	while (ind1 <= r1 && ind2 <= r2) {
		if (nums[ind1] < nums[ind2]) {
			temp.push_back(nums[ind1++]);
		}
		else {
			temp.push_back(nums[ind2++]);
		}
	}
	while (ind1 <= r1) {
		temp.push_back(nums[ind1++]);
	}
	while (ind2 <= r2) {
		temp.push_back(nums[ind2++]);
	}
	for (int i = 0; i < temp.size(); i++) {
		nums[l1 + i] = temp[i];
	}
}

template<typename T>
void merge_sort(int l, int r, std::vector<T>& nums) {
	if (l >= r) {
		return;
	}
	int mid = l + (r - l) / 2;
	merge_sort(l, mid, nums);
	merge_sort(mid + 1, r, nums);
	merge(l, mid, mid + 1, r, nums);
}

/*
* Quick Sort.
*/
template<typename T>
int partition(int l, int r, std::vector<T> &nums) {
	T pivot = nums[r];
	int i = l;
	for (int j = l; j < r; j++) {
		if (nums[j] <= pivot) {
			std::swap(nums[j], nums[i]);
			i++;
		}
	}
	std::swap(nums[i], nums[r]);
	return i;
}

template<typename T>
void quick_sort(int l, int r, std::vector<T>& nums) {
	if (l >= r) {
		return;
	}
	int p = partition(l, r, nums);
	quick_sort(l, p - 1, nums);
	quick_sort(p + 1, r, nums);
}

