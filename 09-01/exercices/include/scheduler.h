#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <vector>

#include "machine.h"
#include "task.h"

class Scheduler {
	private:
	bool verbose;

	public:
	Scheduler ();
	Scheduler (bool verbose);

	int schedule (int nbMachines, std::vector<Task> tasks);
	int schedule (std::vector<Machine> machines, std::vector<Task> tasks);

	bool getVerbose ();
	void setVerbose (bool verbose);
};
#endif
