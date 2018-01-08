#include "ex-1-b.h"

int getMaxNumberPeaked (std::vector<int>* arr) {
	int max;

	max = arr->front();

	for (const int& i : *arr) {
		if (i < max)
			break;
		max = i;
	}

	return max;
}
