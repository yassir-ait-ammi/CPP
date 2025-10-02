#include <iostream>
#include <vector>
#include <algorithm>

// Helper: print a vector
void printVec(const std::vector<int>& v, const std::string& name) {
	std::cout << name << ": ";
	for (size_t i = 0; i < v.size(); i++) {
	std::cout << v[i] << " ";
	}
	std::cout << "\n";
}

	// Simplified Ford-Johnson Merge-Insertion Sort
std::vector<int> fordJohnsonSort(std::vector<int> arr)
{
	if (arr.size() <= 1) return arr;

	// --- Phase 1: Form pairs and sort inside each pair
	std::vector<std::pair<int,int> > pairs;
	size_t i = 0;
	for (; i + 1 < arr.size(); i += 2) {
		int a = arr[i], b = arr[i+1];
		if (a > b) std::swap(a, b);
		pairs.push_back(std::make_pair(a, b));
	}

	// If odd leftover
	int leftover = -1;
	if (i < arr.size()) leftover = arr[i];

	// --- Phase 2: Create main and pend
	std::vector<int> mainSet;
	std::vector<int> pendSet;

	// First pair: both go to main
	mainSet.push_back(pairs[0].first);
	mainSet.push_back(pairs[0].second);

	// Remaining: "b"s go to main, "a"s go to pend
	for (size_t j = 1; j < pairs.size(); j++) {
		mainSet.push_back(pairs[j].second);
		pendSet.push_back(pairs[j].first);
	}

	// --- Phase 3: Insert pend elements using binary search
	for (size_t j = 0; j < pendSet.size(); j++) {
		int x = pendSet[j];
		typename std::vector<int>::iterator pos = std::lower_bound(mainSet.begin(), mainSet.end(), x);
		mainSet.insert(pos, x);
	}

	// --- Phase 4: Insert leftover if exists
	if (leftover != -1) {
		typename std::vector<int>::iterator pos = std::lower_bound(mainSet.begin(), mainSet.end(), leftover);
		mainSet.insert(pos, leftover);
	}

	return mainSet;

}

int main() {
	std::vector<int> arr = {25, 3, 7, 1, 19, 2, 8, 14, 6};
	printVec(arr, "Before");

	std::vector<int> sorted = (arr);
	printVec(sorted, "After");

	return 0;

}
