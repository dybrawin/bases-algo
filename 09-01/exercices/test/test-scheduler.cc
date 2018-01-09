#include <iostream>
#include <vector>

#include "scheduler.h"
#include "task.h"

int main (int argc, char* argv[]) {
	Scheduler s = Scheduler (true);

	int nbMachines = 3;
	std::vector<Task> tasks = {{1, 2}, {2, 2},
		{3, 5}, {4, 3}, {5, 2},
		{6, 3}, {7, 4}, {8, 3},
		{9, 5}, {10, 4}, {11, 10}};

	int makespan = 0;

	makespan = s.schedule (nbMachines, tasks);

	std::cout << "Makespan is " << makespan << std::endl;

	return 0;
}
