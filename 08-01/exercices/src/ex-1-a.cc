#include "ex-1-a.h"

int getMaxNumberUnsorted (std::vector<int>* arr) {
	int max;

	max = arr->front();

	for (const int& i : *arr)
		if (i > max)
			max = i;

	return max;
}
