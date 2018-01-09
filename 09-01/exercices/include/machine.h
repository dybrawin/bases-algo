#ifndef MACHINE_H
#define MACHINE_H

#include <vector>

#include "task.h"

class Machine {
	private:
	int size;
	std::vector<Task> tasks;

	public:
	Machine ();

	void addTask (Task task);

	int getTasksSize () const;
};
#endif
