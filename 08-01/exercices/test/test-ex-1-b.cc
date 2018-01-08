#include <iostream>
#include <vector>

#include "ex-1-b.h"

int main (int argc, char* argv[]) {
	std::vector<int> arr = {1, 15, 20, 120, 25, 23, 5};
	int max;

	std::cout << "The values of the array are :" << std::endl;
	for (const int& i : arr)
		std::cout << '\t' << i << std::endl;

	max = getMaxNumberPeaked (&arr);

	std::cout << "The greatest number from the array is " << max << std::endl;
}
